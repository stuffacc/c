#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
	char value;
	struct Node* next;
} Node;

typedef struct Stack {
	Node* top;
	int size;
} Stack;


void init(Stack* stack);
void push(Stack* stack, char value);
Node* pop(Stack* stack);
void printStack(Stack* stack);
