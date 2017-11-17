//
// Created by georg on 11/17/2017.
//

#include <iostream>

#include "../queue.h"

template <typename T>
struct Box {
    Box(const T& data, Box* link = nullptr) :
            data(data), link(link){};
    T data;
    Box* link;
};

template <typename T>
class l_queue : public queue<T> {
private:
    Box<T>* first;
    Box<T>* last;
    long ssize;
    void copyQueue(const l_queue<T>& other);
    void deleteQueue();
public:
    l_queue();
    l_queue(const l_queue<T>& other);
    l_queue<T>& operator=(const l_queue<T>& other);
    ~l_queue();
    bool empty() const override;
    int size() const override;
    bool push(const T &t) override;
    T pop() override;
    T &front() override;
    const T &front() const override;
    T &back() override;
    const T &back() const override;
};

template <typename T>
void l_queue<T>::copyQueue(const l_queue<T> &other) {
    Box<T>* p = other.first;
    while(p != nullptr) {
        push(p->data);
        p = p->link;
    }
}

template <typename T>
void l_queue<T>::deleteQueue() {
    while(!empty()){
        pop();
    }
}

template <typename T>
l_queue<T>::l_queue() {
    first = last = nullptr;
    ssize = 0;
}

template <typename T>
l_queue<T>::l_queue(const l_queue<T> &other) : first(nullptr), last(nullptr), ssize(other.ssize) {
    copyQueue(other);
}

template <typename T>
l_queue<T> &l_queue<T>::operator=(const l_queue<T> &other) {
    if (this != &other) {
        deleteQueue();
        copyQueue(other);
    }
    return *this;
}

template <typename T>
l_queue<T>::~l_queue() {
    deleteQueue();
}

template <typename T>
bool l_queue<T>::empty() const {
    return last == nullptr;
}

template <typename T>
int l_queue<T>::size() const {
    return ssize;
}

template <typename T>
bool l_queue<T>::push(const T &t) {
    Box<T> *p = new Box<T>(t);
    if (!empty()) {
        last->link = p;
    } else {
        first = p;
    }
    last = p;
    ++ssize;
    return true;
}

template <typename T>
T l_queue<T>::pop() {
    Box<T> *first_copy = first;
    first = first->link;
    if (first == nullptr) {
        last = nullptr;
}
    --ssize;
    delete first_copy;
}

template <typename T>
T &l_queue<T>::front() {
    if (empty()) {
        std::cerr << "Empty queue\n";
        exit(1);
    }
    return first->data;
}

template <typename T>
const T &l_queue<T>::front() const {
    if (empty()) {
        std::cerr << "Empty queue\n";
        exit(1);
    }
    return first->data;
}

template <typename T>
T &l_queue<T>::back() {
    if (empty()) {
        std::cerr << "Empty queue\n";
        exit(1);
    }
    return last->data;
}

template <typename T>
const T &l_queue<T>::back() const {
    if (empty()) {
        std::cerr << "Empty queue\n";
        exit(1);
    }
    return last->data;
}
