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
void deleteList(List* list);

void addValue(List* list, int value);

int isPalindrom(List* list);

void printList(List* list);
