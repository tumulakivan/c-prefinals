#include <stdio.h>
#include <stdlib.h>
#include "link.h"

int main(int argc, char **argv) {
    int num, items, ctr = 0;
    node *list1 = NULL, *list2 = NULL, *merged_list = NULL;

    printf("num of nodes: ");
    scanf("%d", &items);
    while(ctr < items) {
        printf("node %d: ", ctr + 1);
        scanf("%d", &num);
        list1 = append(list1, num);
        ctr++;
    }

    ctr = 0;
    printf("num of nodes: ");
    scanf("%d", &items);
    while(ctr < items) {
        printf("node %d: ", ctr + 1);
        scanf("%d", &num);
        list2 = append(list2, num);
        ctr++;
    }

    display(list1);
    display(list2);

    merged_list = merge(list1, list2);
    display(merged_list);
    merged_list = mergeUnique(list1, list2);
    display(merged_list);

    return 0;
}