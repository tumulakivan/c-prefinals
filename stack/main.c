#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

int main(int argc, char **argv) {
    stack *s = createStack();
    if(isEmpty(s)) printf("stack empty\n");
    push(s, 10);
    push(s, 20);
    push(s, 30);
    printf("count: %d\n", s->count);
    display(s);
    pop(s);
    printf("count: %d\n", s->count);
    display(s);

    return 0;
}