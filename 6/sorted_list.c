#include "sorted_list.h"


void initList(List* list) {
        (*list).head = NULL;
        (*list).size = 0;
}

void addValue(List* list, int value) {
        Node* head = (*list).head;
        
        if (head == NULL) {
                Node* node = malloc(sizeof(Node));
                (*node).next = NULL;
                (*node).value = value;
                
                (*list).head = node;
                (*list).size++;
                return;
        }
        
        
        
        int current = (*head).value;
        Node* buff = NULL;


        while (current < value) {
                if ((*head).next == NULL) {
                        Node* node = malloc(sizeof(Node));
                        (*node).next = NULL;
                        (*node).value = value;
                
                        (*head).next = node;
                        
                        (*list).size++;
                        return;
                }
        
        
                buff = head;
                head = (*head).next;
                
                current = (*head).value;
        }
        
        
        Node* node = malloc(sizeof(Node));
        (*node).next = head;
        (*node).value = value;
        
        (*list).size++;
        
        if (buff != NULL) {
                (*buff).next = node;
        }
        
        else {
                (*list).head = node;
        }
}


void removeValue(List* list, int value) {
        Node* head = (*list).head;

        if (head == NULL) {
                return;
        }
        
        if ((*head).next == NULL) {
                
        }
        
        Node* buff = NULL;
        
        while (head != NULL) {
                int listValue = (*head).value;
                if (listValue == value) {
                        if (buff != NULL) {
                                (*buff).next = (*head).next;
                        }
                        
                        else {
                                (*list).head = (*head).next;
                        }
                        
                        free(head);
                        (*list).size--;
                        
                        return;
                }
                
                buff = head;
                head = (*head).next;
        }
}


void printList(List* list) {
        Node* head = (*list).head;
        while (head != NULL) {
                int value = (*head).value;
                printf("%d ", value);
                head = (*head).next;
        }
        printf("\n");
}
