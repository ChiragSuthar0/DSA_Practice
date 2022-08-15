
#ifndef __Stack_H__
#define __Stack_H__

#include "Constants.h"

class Stack
{
public:
    void init();

private:

    struct stack
	{
		int items[MAX];
		int top;
	};
    typedef struct stack st;

	void push(st* s, int item);
	int pop(st* s);

	bool isEmpty(st* s);
	bool isFull(st* s);

	int Peek(st* s);

	void printStack(st* s);
};
#endif