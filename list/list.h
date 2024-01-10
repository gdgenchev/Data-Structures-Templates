#ifndef LIST_LIST_H
#define LIST_LIST_H

#include <iostream>
template <typename T>
class list {
public:
    virtual void add(const T& data) = 0;
    virtual bool empty() const = 0;
    virtual size_t size() const = 0;
};

#endif //LIST_LIST_H
