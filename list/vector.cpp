#include "list.h"

const int INITIAL_SIZE = 4;

template<typename T>
class vector : public list<T> {
private:
    T* elements;
    long capacity;
    int currentSize;

    void copy(T const* other);

    void copyVector(const vector<T>& other);

    void deleteVector();

    bool full();

    void resize();

public:
    vector();

    vector(const vector<T>& other);

    vector<T>& operator=(const vector<T>& other);

    void add(const T& data) override;

    T& operator[](int index);

    bool empty() const override;

    size_t size() const override;

    virtual ~vector();
};

template<typename T>
vector<T>::vector() {
    elements = new T[INITIAL_SIZE];
    capacity = INITIAL_SIZE;
    currentSize = 0;
}

template<typename T>
vector<T>::vector(const vector<T>& other) {
    copyVector(other);
}

template<typename T>
void vector<T>::copyVector(const vector<T>& other) {
    capacity = other.capacity;
    currentSize = other.currentSize;
    elements = new T[capacity];
    copy(other.arr);
}

template<typename T>
void vector<T>::deleteVector() {
    delete[] elements;
}

template<typename T>
vector<T>& vector<T>::operator=(const vector<T>& other) {
    if (this != &other) {
        deleteVector();
        copyVector(other);
    }
    return *this;
}

template<typename T>
vector<T>::~vector() {
    deleteVector();
}

template<typename T>
void vector<T>::add(const T& data) {
    if (full()) {
        resize();
    }

    elements[currentSize++] = data;
}


template<typename T>
bool vector<T>::full() {
    return currentSize + 1 == capacity;
}

template<typename T>
void vector<T>::resize() {
    T* oldElements = elements;
    elements = new T[capacity * 2];
    copy(oldElements);
    delete[] oldElements;
    capacity *= 2;
}

template<typename T>
void vector<T>::copy(const T* other) {
    for (int i = 0; i < currentSize; i++) {
        elements[i] = other[i];
    }
}

template<typename T>
T& vector<T>::operator[](int index) {
    if (index >= currentSize) {
        throw std::runtime_error("Index out of bounds");
    }

    return elements[index];
}

template<typename T>
size_t vector<T>::size() const {
    return (size_t) currentSize;
}

template<typename T>
bool vector<T>::empty() const {
    return currentSize == 0;
}
