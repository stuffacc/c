#pragma once
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node* next;

} typedef Node;

struct List {
    Node* head;
    int size;
} typedef List;

void initList(List* list);
Node* createNode(int value, Node* next);

void addValue(List* list, int value);
void removeValue(List* list, int value);

void printList(List* list);
