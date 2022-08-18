//
// Created by chirag on 15/8/22.
//

#ifndef __Circular_Queue_H__
#define __Circular_Queue_H__

#include "Constants.h"

class Circular_Queue {

public:

    virtual void init();

private:

    struct circularQueue {
        int items[MAX];
        int front;
        int rear;
    };

    typedef struct circularQueue CQ;

    void Enqueue(CQ* cq, int number);
    int Dequeue(CQ *cq);
    bool isEmpty(CQ *cq);
    bool isFull(CQ *cq);
    void Peek(CQ* cq);
    void printQueue(CQ* cq);




};


#endif //DSA_CIRCULAR_QUEUE_H
