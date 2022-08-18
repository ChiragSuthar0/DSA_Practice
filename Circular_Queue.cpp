//
// Created by chirag on 15/8/22.
//

#include "iostream"
#include "Circular_Queue.h"

using namespace std;

void Circular_Queue::init() {
    CQ* cq = (CQ*) malloc(sizeof (CQ));
    cq->front=-1;
    cq->rear=-1;

    Enqueue(cq, 5);
    Enqueue(cq , 12);
    Enqueue(cq , 62);
    Enqueue(cq , 77);
    Enqueue(cq , 33);

    Peek(cq);

    printQueue(cq);

    Dequeue(cq);

    printQueue(cq);

    Dequeue(cq);
    Dequeue(cq);
    Dequeue(cq);

    printQueue(cq);

    Enqueue(cq, 6);
    Enqueue(cq , 17);
    Enqueue(cq , 91);
    Enqueue(cq , 31);
    Enqueue(cq , 43);

    printQueue(cq);
}

void Circular_Queue::Enqueue(Circular_Queue::CQ *cq, int number) {
    if (!isFull(cq)) {
        if (cq->front == -1) {
            cq->front = 0;
        }
        cout << "Element added to the Queue\n";
        cq->rear = (cq->rear+1) % MAX;
        cq->items[cq->rear] = number;
    }
}

int Circular_Queue::Dequeue(Circular_Queue::CQ *cq) {
    if (!isEmpty(cq)) {
        cout << "'" << cq->items[cq->front] << "'" << " removed\n";
        if (cq->front == cq->rear) {
            cq->front = -1;
            cq->rear = -1;
        }
        else {
            cq->front = (cq->front + 1) % MAX;
        }
        return cq->items[cq->front - 1];
    } else {
        return -1;
    }
}

bool Circular_Queue::isEmpty(Circular_Queue::CQ *cq) {
    if (cq->front == -1) {
        cout << "Queue is Empty\n";
        return true;
    }
    return false;
}

bool Circular_Queue::isFull(Circular_Queue::CQ *cq) {
    if (cq->front == 0 && cq->rear == MAX - 1) {
        return true;
    }
    if (cq->front == cq->rear + 1) {
        return true;
    }
    return false;
}

void Circular_Queue::Peek(Circular_Queue::CQ *cq) {
    cout << "Last Element in the Queue is: " << cq->items[cq->rear] << endl;
}

void Circular_Queue::printQueue(Circular_Queue::CQ *cq) {
    cout << "Queue: " << endl;

    for (int i = cq->front; i != cq->rear; i = (i+1) % MAX) {
        cout << cq->items[i] << "  ";
    }

    cout << endl;
}
