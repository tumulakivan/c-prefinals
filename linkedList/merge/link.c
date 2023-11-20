#include <stdio.h>
#include <stdlib.h>
#include "link.h"

node *append(node *list, int num) {
    node *new_node, *curr_node;

    new_node = (node *)malloc(sizeof(node));
    if(new_node == NULL) {
        fprintf(stderr, "malloc() fail.\n");
        return list;
    }
    new_node->data = num;

    if(list == NULL) {
        new_node->next = list;
        list = new_node;
        return list;
    }

    curr_node = list;
    while(curr_node->next != NULL) curr_node = curr_node->next;
    new_node->next = curr_node->next;
    curr_node->next = new_node;

    return list;
}

node *merge(node *list1, node *list2) {
    node *curr_node, *merge_list;

    merge_list = list1;
    curr_node = merge_list;
    while(curr_node->next != NULL) curr_node = curr_node->next;
    curr_node->next = list2;

    return merge_list;
}

void display(node *list) {
    if(list == NULL) {
        fprintf(stderr, "empty.\n");
        return;
    }

    node *curr_node = list;
    while(curr_node != NULL) {
        printf("%d ", curr_node->data);
        curr_node = curr_node->next;
    }
    printf("\n");
}