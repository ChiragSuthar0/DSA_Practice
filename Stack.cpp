//
// Created by chirag on 14/8/22.
//
#include <iostream>
#include "Stack.h"

using namespace std;


void Stack::init() {
    st* s = (st*)malloc(sizeof(st));
    s->top = -1;

    BACK:
    system("clear");
    cout << endl
         << "All Possible Operations" << endl
         << "1. Push" << endl
         << "2. Pop" << endl
         << "3. Peek" << endl
         << "4. Print complete Stack" << endl
         << "5. exit" << endl << endl;

    cout << "Please Select Your choice : " << endl;

    int choice;
    cin >> choice;

    int pushItem;

    switch (choice)
    {
        case 1:
            cout << endl << "Please Enter the item you want to insert: ";
            cin >> pushItem;
            push(s, pushItem);
            goto BACK;
        case 2:
            pop(s);
            goto BACK;
        case 3:
            Peek(s);
            goto BACK;
        case 4:
            printStack(s);
            goto BACK;
        case 5:
            return;

        default:
            cout << "Please enter a valid response\n\n";
            goto BACK;
    }
}


// Push an element to the stack
void Stack::push(st* s, int item) {
    if (!isFull(s))
    {
        s->top++;
        s->items[s->top] = item;
        cout << endl << "Item Pushed" << endl;
    }
    else {
        cout << "Stack Full" << endl;
    }
}

// Pop the last element out of the stack
int Stack::pop(st* s)
{
    if (!isEmpty(s))
    {
        s->top--;
        cout << "\nThe element '" << s->items[s->top + 1] << "' is removed" << endl;
        return s->items[s->top + 1];
    }
    else {
        cout << "Stack Empty" << endl;
        return -1;
    }

}

// Check if the stack is empty
bool Stack::isEmpty(st* s)
{
    if (s->top == -1)
    {
        return true;
    }
    return false;
}

//Check if the stack is Full
bool Stack::isFull(st* s)
{
    if (s->top == MAX - 1)
    {
        return true;
    }
    return false;
}

int Stack::Peek(st* s)
{
    if (isEmpty(s))
    {
        cout << "Stack is Empty\n\n";
        return -1;
    }
    else {
        cout << "The last element in the stack is : " << s->items[s->top] << "\n\n";
        return s->items[s->top];
    }
}

void Stack::printStack(st* s)
{
    cout << "\n\nStack :" << endl;

    for (int i = 0; i < s->top + 1; i++)
    {
        cout << s->items[i] << " ";
    }

    cout << endl;
}

