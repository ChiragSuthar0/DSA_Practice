//
// Created by chirag on 19/8/22.
//

#include "LinkedList.h"
#include "iostream"
#include "Constants.h"

void LinkedList::init() {

    Node* head = new Node();
    Node* currentNode = head;

REPEAT:
    printf("\n\n");
    std::cout << "Please Choose the Operation" << std::endl
    << "1. Insert" << std::endl
    << "2. Print All" << std::endl
    << "3. END" << std::endl;

    int temp;
    std::cin >> temp;

    if (temp == 1) {
        std::cout << "Enter the Elements for the linked-list:\n\n";
        insert(currentNode);
        currentNode = currentNode->next;
        goto REPEAT;
    }
    else if (temp == 2) {
        printAll(head);
        goto REPEAT;
    }
    else if (temp == 3) {
        return;
    }
    else {
        std::cout << "Please Enter the correct choice\n";
        goto REPEAT;
    }
}

void LinkedList::printAll(Node* nd) {
    std::cout << "All the Elements in the current Linked List:\n\n";

    do {
        std::cout << nd->value << " ";
        nd = nd->next;
    } while (nd->next != nullptr);

    std::cout << "\n\n";
}

void LinkedList::insert(Node* nd) {
    std::cout << std::endl << "Please enter the number: ";
    int temp;
    std::cin >> temp;
    nd->value = temp;
    nd->next = new Node();
}
