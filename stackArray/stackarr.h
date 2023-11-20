#ifndef STACKARR_H_
#define STACKARR_H_
#include <stdbool.h>

typedef struct stack {
    int top;
    int data[5];
}stack;

stack *createStack();
void push(stack *s, int data);
int peek(stack s);
bool isFull(stack s);
bool isEmpty(stack s);
int pop(stack *s);

#endif