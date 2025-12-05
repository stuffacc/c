#include "list.h"


void initList(List* list) {
        (*list).head = NULL;
        (*list).size = 0;
}

void addValue(List* list, int value) {
    Node* head = (*list).head;
    
    Node* node = malloc(sizeof(Node));
    (*node).value = value;
    (*node).next = NULL;
    
    if (head == NULL) {
            (*list).head = node;
            (*list).size++;
            return;
    }
    
    (*node).next = head;
    (*list).head = node;
    (*list).size++;
}

void deleteList(List* list) {
    Node* head = (*list).head;
    
    if (head == NULL) {
            return;
    }
    
    
    
    Node* next = (*head).next;
    // 1 2 3 4 5
    while (next != NULL) {
            free(head);
            head = next;
            next = (*next).next;
    }
    
    free(head);
    
    (*list).size = 0;
    (*list).head = NULL;
}

int isPalindrom(List* list) {
        List listReverse;
        initList(&listReverse);
        
        Node* head = (*list).head;


        int size = (*list).size;
        for (int i = 0; i < size; i++) {
                int value = (*head).value;
                addValue(&listReverse, value);
                head = (*head).next;
        }
        
        Node* headStart = (*list).head;
        Node* headEnd = listReverse.head;
        for (int i = 0; i < size; i++) {
                int valueStart = (*headStart).value;
                int valueEnd = (*headEnd).value;
                if (valueStart != valueEnd) {
                        deleteList(&listReverse);
                        return 0;
                }
                headStart = (*headStart).next;
                headEnd = (*headEnd).next;
        }
        
        deleteList(&listReverse);
        
        return 1;
}


void printList(List* list) {
         Node* head = (*list).head;
         while (head != NULL) {
                printf("%d ", (*head).value);
                head = (*head).next;
         }
         printf("\n");
}
