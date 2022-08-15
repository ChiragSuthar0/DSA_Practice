//
// Created by chirag on 14/8/22.
//

#ifndef __QUEUE_H__
#define __QUEUE_H__

#include "Constants.h"

class Queue {
public:

    virtual void init();

private:

    struct queue {
        int items[MAX];
        int front;
        int rear;
    };

    typedef struct queue q;

    void Enqueue(q*, int number);
    int Dequeue(q *);
    bool isEmpty(q *qu);
    bool isFull(q *qu);
    void Peek(q*);
    void printQueue(q*);


};

#endif //__QUEUE_H__
