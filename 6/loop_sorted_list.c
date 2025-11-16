#include "sorted_list.h"

void main() {
        List list;
        initList(&list);
        
        int n;
        int m;
        
        printf("Количество войнов: ");
        scanf("%d", &n);
        
        printf("Убивают каждого: ");
        scanf("%d", &m);
        
        if (n <= 0) {
                printf("n должно быть > 0\n");
                return;
        }
        
        if (m == 1) {
                printf("Нужно встать на %d место\n", n);
                return;
        }
        
        for (int i = 1; i <= n; i++) {
                addValue(&list, i);
        }
        
        
        Node* head = list.head;
        
        while ((*head).next != NULL) {
                head = (*head).next;
        }
        
        (*head).next = list.head;
        int num = 1;
        
        head = list.head;
        Node* prev = NULL;
        
        while (list.size > 1) {
                if (num == m) {
                        (*prev).next = (*head).next;
                        //free(head);
                        
                        head = (*prev).next;
                        num = 1;
                        
                        
                        list.size--;
                        
                        continue;
                }
                
                num++;
                prev = head;
                head = (*head).next;
        }
        
        printf("Нужно встать на %d место\n", (*head).value);
        
        
}
