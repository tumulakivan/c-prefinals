#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stackarr.h"

int main(int argc, char **argv) {
    stack *s = createStack();

    printf("%d\n", s->top);
    if(isEmpty(*s)) printf("empty\n");
    push(s, 10);
    push(s, 20);
    push(s, 30);
    push(s, 40);
    push(s, 50);
    if(isFull(*s)) printf("full\n");
    printf("top: %d\n", peek(*s));
    printf("popped: %d\n", pop(s));
    printf("popped: %d\n", pop(s));
    printf("popped: %d\n", pop(s));
    printf("popped: %d\n", pop(s));
    printf("popped: %d\n", pop(s));
    printf("top: %d\n", peek(*s));    

    return 0;
}