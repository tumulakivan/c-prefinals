#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

stack *createStack() {
    stack *s = (stack *) malloc(sizeof(stack));
    if(s == NULL) {
        fprintf(stderr, "malloc() fail");
        return NULL;
    }
    s->top = NULL;
    s->count = 0;

    return s;
}

node *createNode(int data) {
    node *new_node = (node *) malloc(sizeof(node));
    if(new_node == NULL) {
        fprintf(stderr, "malloc() fail");
        return NULL;
    }

    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void push(stack *s1, int num) {
    node *new_node = createNode(num);
    new_node->next = s1->top;
    s1->top = new_node;
    s1->count++;
}

void pop(stack *s1) {
    node *temp_node = s1->top;
    s1->top = temp_node->next;
    temp_node->next = NULL;
    free(temp_node);
    s1->count--;
}

void display(stack *s1) {
    node *curr_node = s1->top;
    while(curr_node != NULL) {
        printf("%d\n", curr_node->data);
        printf("|\n");
        curr_node = curr_node->next;
    }
    printf("NULL\n");
}

bool isEmpty(stack *s1) {
    if(!s1->top) return true;

    return false;
}