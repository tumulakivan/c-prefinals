#ifndef STACK_H_
#define STACK_H_
#include <stdbool.h>

typedef struct node {
    int data;
    struct node *next;
}node;

typedef struct stack {
    int count;
    struct node *top;
}stack;

stack *createStack();
node *createNode(int data);
void push(stack *s1, int num);
void pop(stack *s1);
void display(stack *s1);
bool isEmpty(stack *s1);

#endif