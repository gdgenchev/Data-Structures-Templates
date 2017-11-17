
#include "../stack.h"
#include <iostream>

const int INITIAL = 4;
template <typename T>
class array_stack : public stack<T>{
private:
    T* arr;
    long capacity;
    int topIndex;
    void copy(T const* other);
    void copyStack(const array_stack<T>& other);
    void deleteStack();
    bool full();
    void resize();
public:
    array_stack();
    array_stack(const array_stack<T>& other);
    array_stack<T>& operator=(const array_stack<T>& other);
    ~array_stack();
    bool empty() const override;
    void push(const T& data) override;
    bool pop() override; // bool for testing purposes
    T& top() override;
    const T& top() const override;
    size_t size () const override;
    int getCapacity () const {
        return capacity;
    }
};

template <typename T>
void array_stack<T>::copy(const T * other) {
    for(int i = 0; i <= topIndex; i++) {
        arr[i] = other[i];
    }
}

template <typename T>
void array_stack<T>::copyStack(const array_stack<T> &other) {
    capacity = other.capacity;
    topIndex = other.topIndex;
    arr = new T[capacity];
    copy(other.arr);
}

template <typename T>
void array_stack<T>::deleteStack() {
    delete[] arr;
}

template <typename T>
void array_stack<T>::resize() {
    T* old_arr = arr;
    arr = new T[capacity  * 2];
    copy(old_arr);
    delete[] old_arr;
    capacity *= 2;
}

template <typename T>
bool array_stack<T>::full() {
    return topIndex + 1 == capacity;
}

template <typename T>
array_stack<T>::array_stack() : topIndex(-1), capacity(INITIAL) {
    arr = new T[capacity];
}

template <typename T>
array_stack<T>::array_stack(const array_stack<T> &other) {
    copyStack(other);
}

template <typename T>
array_stack<T> &array_stack<T>::operator=(const array_stack<T> &other) {
    if (this != &other) {
        deleteStack();
        copyStack(other);
    }
    return *this;
}

template <typename T>
bool array_stack<T>::empty() const {
    return topIndex == -1;
}

template <typename T>
void array_stack<T>::push(const T& data) {
    if (full()) {
        resize();
    }
    arr[++topIndex] = data;
}

template <typename T>
bool array_stack<T>::pop()  {
    if (!empty()) {
        --topIndex;
        return true;
    } else {
        std::cerr << "Cannot pop from empty stack!\n";
        return false;
    }
}

template <typename T>
T& array_stack<T>::top(){
    if (empty()) {
        std::cerr << "Cannot show top element in empty stack\n";
        exit(1);
    }
    return arr[topIndex];
}
template <typename T>
const T &array_stack<T>::top() const {
    if(empty()) {
        std::cerr << "Cannot show top element in empty stack\n";
        exit(1);
    }
    return arr[topIndex];
}

template <typename T>
array_stack<T>::~array_stack() {
    deleteStack();
}

template <typename T>
size_t array_stack<T>::size() const {
    return (size_t) topIndex + 1;
}
