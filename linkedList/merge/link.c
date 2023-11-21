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

node *mergeUnique(node *list1, node *list2) {
    node *merge_list = NULL;

    while(list1 != NULL) {
        if(!(isPresent(merge_list, list1->data))) 
            merge_list = append(merge_list, list1->data);
        list1 = list1->next;
    }

    while(list2 != NULL) {
        if(!(isPresent(merge_list, list2->data)))
            merge_list = append(merge_list, list2->data);
        list2 = list2->next;
    }

    return merge_list;
}

bool isPresent(node *list, int num) {
    while (list != NULL) {
        if(list->data == num) return true;
        list = list->next;
    }
    return false;
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