//
// Created by georg on 11/14/2017.
//

#ifndef GENERIC_STACK_WITH_POINTERS_STACK_H
#define GENERIC_STACK_WITH_POINTERS_STACK_H
#include <iostream>
template <typename T>
class stack {
public:
    virtual void push(const T& data) = 0;
    virtual bool pop() = 0;
    virtual T& top() = 0;
    virtual const T& top() const  = 0;
    virtual bool empty() const = 0;
    virtual size_t size() const = 0;
};


#endif //GENERIC_STACK_WITH_POINTERS_STACK_H
