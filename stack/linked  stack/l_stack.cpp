#include "../stack.h"

template <typename T>
struct Box {
    T data;
    Box* link;
};

template <typename T>
class l_stack : public stack<T> {
private:
    Box<T>* peek;
    size_t s_size;
    void deleteStack();
public:
    l_stack();
    ~l_stack();
    void push(const T& data) override;
    bool pop() override;
    T& top() override;
    const T& top() const override;
    bool empty() const override;
    size_t size() const override;
};

template <typename T>
void l_stack<T>::deleteStack() {
    while (!empty()){
        pop();
    }
}

template <typename T>
l_stack<T>::l_stack() {
    peek = nullptr;
    s_size = 0;
}

template <typename T>
l_stack<T>::~l_stack() {
    deleteStack();
}

template <typename T>
void l_stack<T>::push(const T &data) {
    auto * newBox = new Box<T>;
    newBox->data = data;
    newBox->link = peek;
    peek = newBox;
    ++s_size;
}

template <typename T>
bool l_stack<T>::pop() {
    if (empty()) {
        return false;
    } else {
        Box<T>* p = peek;
        peek = peek->link;
        delete p;
        --s_size;
    }
}

template <typename T>
T& l_stack<T>::top() {
    if(empty()) {
        std::cerr << "No top element in empty stack\n";
        exit(1);
    }
    return peek->data;
}

template <typename T>
const T &l_stack<T>::top() const {
    if(empty()) {
        std::cerr << "No top element in empty stack\n";
        exit(1);
    }
    return peek->data;
}

template <typename T>
bool l_stack<T>::empty() const {

    return peek == nullptr;
}

template <typename T>
size_t l_stack<T>::size() const {
    return s_size;
}