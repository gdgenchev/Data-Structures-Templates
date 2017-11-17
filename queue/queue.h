//
// Created by georg on 11/17/2017.
//

#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H

template <typename T>
class queue {
public:
    virtual bool empty() const = 0;

    virtual int size() const = 0;

    virtual bool push(T const&) = 0;

    virtual T pop() = 0;

    virtual T& front() = 0;

    virtual const T& front() const = 0;

    virtual T& back() = 0;

    virtual const T& back() const = 0;
};

#endif //QUEUE_QUEUE_H
