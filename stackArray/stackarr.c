#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stackarr.h"
#define max_size 5

stack *createStack() {
    stack *s = (stack *) malloc(sizeof(stack));
    s->top = -1;
    s->data[max_size] = 0;
}

void push(stack *s, int data) {
    if(s->top == max_size - 1) {
        printf("stack overflow\n");
        return;
    }

    s->data[++s->top] = data;
}

int peek(stack s) {
    if(s.top == -1) return -1;
    return s.data[s.top];
}

bool isFull(stack s) {
    if(s.top == max_size - 1) return true;
    return false;
}

bool isEmpty(stack s) {
    if(s.top == -1) return true;
    return false;
}

int pop(stack *s) {
    if(isEmpty(*s)) return -1;
    int popped = s->data[s->top];
    s->data[s->top] = 0;
    s->top--;
    return popped;
}