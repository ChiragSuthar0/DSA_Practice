//
// Created by chirag on 19/8/22.
//

#ifndef __LinkedList_H__
#define __LinkedList_H__


class Node {
public:
    int value;
    Node* next = nullptr;
};

class LinkedList {
public:
    virtual void init();

private:
    static void insert(Node*);
    static void printAll(Node*);

};


#endif //DSA_LINKEDLIST_H
