#ifndef LINK_H_
#define LINK_H_
#include <stdbool.h>

typedef struct node {
    int data;
    struct node *next;
} node;

node *append(node *list, int num);
node *merge(node *list1, node *list2);
node *mergeUnique(node *list1, node *list2);
bool isPresent(node *list, int num);
void display(node *list);

#endif