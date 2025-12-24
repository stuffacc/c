#include "stack.h"

void init(Stack* stack)
{
    (*stack).top = NULL;
    (*stack).size = 0;
}

void push(Stack* stack, char value)
{
    Node* new_node = malloc(sizeof(Node));

    (*new_node).value = value;
    (*new_node).next = (*stack).top;

    (*stack).top = new_node;
    (*stack).size++;
}

Node* pop(Stack* stack)
{
    if ((*stack).top == NULL) {
        return NULL;
    }

    Node* out = (*stack).top;
    (*stack).top = (*out).next;

    (*stack).size--;

    return out;
}

void printStack(Stack* stack)
{
    if ((*stack).size == 0) {
        printf("\n");
        return;
    }
    Node* current = (*stack).top;
    do {
        printf("%c ", (*current).value);
        current = (*current).next;
    } while (current != NULL);
    printf("\n");
}
