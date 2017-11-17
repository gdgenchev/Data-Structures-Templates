//
// Created by georg on 11/17/2017.
//
#include <iostream>
#include "../queue.h"
#include "../../doctest.h"

const int INITIAL = 4;
template <typename T>
class array_queue : public queue<T> {
private:
    T* arr;
    int frontIndex;
    int backIndex;
    long capacity;
    bool full();
    void resize();
    void copyQueue(const array_queue<T>& other);
    void copyArr(T* other_arr);
    void deleteQueue();
public:
    array_queue();
    array_queue(const array_queue<T>& other);
    array_queue<T>& operator= (const array_queue<T>& other);
    ~array_queue();
    bool empty() const override;
    int size() const override;
    bool push(T const &t) override;
    T pop() override;
    T &front() override;
    const T &front() const override;
    T &back() override;
    const T &back() const override;
    long getCapacity() const {
        return capacity;
    }
};

template <typename T>
bool array_queue<T>::full() {
    return backIndex + 1 == capacity;
}

template <typename T>
void array_queue<T>::resize() {
    T* old_arr = arr;
    arr = new T[capacity  * 2];
    copyArr(old_arr);
    delete[] old_arr;
    capacity *= 2;
}

template <typename T>
void array_queue<T>::copyQueue(const array_queue<T>& other) {
    capacity = other.capacity;
    frontIndex = other.frontIndex;
    backIndex = other.backIndex;
    copyArr(other.arr);
}

template <typename T>
void array_queue<T>::copyArr(T* other_arr) {
    for (int i = 0; i < capacity; ++i) {
        arr[i] = other_arr[i];
    }
}


template <typename T>
void array_queue<T>::deleteQueue() {
    delete[] arr;
}

template <typename T>
array_queue<T>::array_queue() : frontIndex(0), backIndex(-1), capacity(INITIAL) {
    arr = new T [capacity];
}

template <typename T>
array_queue<T>::array_queue(const array_queue<T> &other) {
    copyQueue(other);
}

template <typename T>
array_queue<T> &array_queue<T>::operator=(const array_queue<T> &other) {
    if (this != &other) {
        deleteQueue();
        copyQueue(other);
    }
    return *this;
}

template <typename T>
array_queue<T>::~array_queue() {
    deleteQueue();
}

template <typename T>
bool array_queue<T>::empty() const {
return backIndex + 1 == frontIndex;
}

template <typename T>
int array_queue<T>::size() const {
    return backIndex + 1;
}

template <typename T>
bool array_queue<T>::push(T const &t) {
    if (full()) {
        resize();
    }
    arr[++backIndex] = t;
}

template <typename T>
T array_queue<T>::pop() {
    if (empty()) {
        std::cerr << "Empty queue!\n";
        exit(1);
    }
    frontIndex += 1;
}

template <typename T>
T& array_queue<T>::front() {
    if (empty()) {
        std::cerr << "Empty queue!\n";
        exit(1);
    }
    return arr[frontIndex];
}

template <typename T>
const T& array_queue<T>::front() const {
    if (empty()) {
        std::cerr << "Empty queue!\n";
        exit(1);
    }
    return arr[frontIndex];
}

template <typename T>
T& array_queue<T>::back() {
    if (empty()) {
        std::cerr << "Empty queue!\n";
        exit(1);
    }
    return arr[backIndex];
}

template <typename T>
const T& array_queue<T>::back() const {
    if (empty()) {
        std::cerr << "Empty queue!\n";
        exit(1);
    }
    return arr[backIndex];
}