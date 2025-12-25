#include "sorted_list.h"

void initList(List* list)
{
    (*list).head = NULL;
    (*list).size = 0;
}

Node* createNode(int value, Node* next)
{
    Node* node = malloc(sizeof(Node));
    if (node == NULL) {
        printf("Ошибка выделения памяти\n");
        exit(-1);
    }

    (*node).next = next;
    (*node).value = value;

    return node;
}

void addValue(List* list, int value)
{
    Node* head = (*list).head;

    if (head == NULL) {
        Node* node = createNode(value, NULL);

        (*list).head = node;
        (*list).size++;
        return;
    }

    Node* buff = NULL;

    while (head->value < value) {
        if ((*head).next == NULL) {
            Node* node = createNode(value, NULL);

            (*head).next = node;

            (*list).size++;
            return;
        }

        buff = head;
        head = (*head).next;
    }

    Node* node = createNode(value, head);

    (*list).size++;

    if (buff != NULL) {
        (*buff).next = node;
    }

    else {
        (*list).head = node;
    }
}

void removeValue(List* list, int value)
{
    Node* iter = (*list).head;

    if (iter == NULL) {
        return;
    }

    Node* buff = NULL;

    while (iter != NULL) {
        int listValue = (*iter).value;
        if (listValue == value) {
            if (buff != NULL) {
                (*buff).next = (*iter).next;
            }

            else {
                (*list).head = (*iter).next;
            }

            free(iter);
            (*list).size--;

            iter = (*list).head;
            continue;
        }

        buff = iter;
        iter = (*iter).next;
    }
}

void printList(List* list)
{
    Node* iter = (*list).head;
    while (iter != NULL) {
        int value = (*iter).value;
        printf("%d ", value);
        iter = (*iter).next;
    }
    printf("\n");
}
