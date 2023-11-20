#ifndef LINK_H_
#define LINK_H_

typedef struct node {
    int data;
    struct node *next;
} node;

node *append(node *list, int num);
node *merge(node *list1, node *list2);
void display(node *list);

#endif