//
// Created by Chirag on 14/8/22.
//

#include <iostream>
#include "Queue.h"

using namespace std;

void Queue::init() {
    q* qu = (q*)malloc(sizeof(q));
    qu->front = 0;
    qu->rear = -1;

    Enqueue(qu, 234);
    Enqueue(qu, 20);
    Enqueue(qu, 67);
    Enqueue(qu, 91);
    Enqueue(qu, 11);

#if _WIN32
    system("cls");
#elif __linux__
    system("clear");
#endif

    while (true) {
        cout << endl
             << "All Possible Operations" << endl
             << "1. Enqueue" << endl
             << "2. Dequeue" << endl
             << "3. Peek" << endl
             << "4. Print Queue" << endl
             << "5. exit" << endl << endl;

        cout << "Please Select Your choice : ";

        int choice;
        cin >> choice;

        int pushItem;

        switch (choice)
        {
            case 1:
                cout << endl << "Please Enter the item you want to insert: ";
                cin >> pushItem;
                Enqueue(qu, pushItem);
                break;

            case 2:
                Dequeue(qu);
                break;

            case 3:
                Peek(qu);
                break;

            case 4:
                printQueue(qu);
                break;

            case 5:
                return;

            default:
                cout << "Please enter a valid response\n\n";
                break;
        }
    }
}

void Queue::Enqueue(Queue::q *qu, int number) {
    if (!isFull(qu)) {
        if (qu->front == -1) {
            qu->front = 0;
        }
        cout << "Element added to the Queue\n";
        qu->rear++;
        qu->items[qu->rear] = number;
    }
}

int Queue::Dequeue(Queue::q *qu) {

    if (isEmpty(qu)) {
        return -1;
    }
    else
    {
        qu->front++;
        cout << "Element Dequeued: '" << qu->items[qu->front - 1] << "'";

        int temp = qu->front;

        if (qu->front > qu->rear) {
            qu->front=-1;
            qu->rear=-1;
        }

        return qu->items[temp - 1];
    }
}

bool Queue::isEmpty(Queue::q *qu) {
    if (qu->rear == -1)
    {
        cout << "Queue is Empty\n";
        return true;
    }
    return false;
}

bool Queue::isFull(Queue::q *qu) {
    if (qu->rear == MAX - 1)
    {
        cout << "Queue is Full\n";
        return true;
    }
    return false;
}

void Queue::Peek(Queue::q *qu) {
    if (!isEmpty(qu)) {
        cout << "\nLast Element of Queue is: '" << qu->items[qu->rear] << "'";
    }
}

void Queue::printQueue(Queue::q *qu) {
    cout << "Queue: " << endl;
    for (int i = qu->front; i < qu->rear + 1; i++) {
        cout << qu->items[i] << " ";
    }
    cout << endl;
}
