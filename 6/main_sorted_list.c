#include "sorted_list.h"

#include <string.h>

void runAllTests();
void testAddValue(List* list, int value, int except);
void testRemoveValue(List* list, int value, int except);

void runAllTests() {
        printf("--- Запуск тестов ---\n");

        List list;
        initList(&list);
        
        printf("AddValue\n");
        testAddValue(&list, 5, list.size + 1);
        testAddValue(&list, 5, list.size + 1);
        testAddValue(&list, 5, list.size + 1);
        testAddValue(&list, 5, list.size + 1);
        testAddValue(&list, -14, list.size + 1);
        testAddValue(&list, 5, list.size + 1);
        testAddValue(&list, 100, list.size + 1);
        testAddValue(&list, 54, list.size + 1);
        printf("\n");
        printf("RemoveValue\n");
        testRemoveValue(&list, 199, list.size);
        testRemoveValue(&list, 5, list.size - 5);
        testRemoveValue(&list, 199, list.size);
        testRemoveValue(&list, 199, list.size);
        testRemoveValue(&list, 5, list.size);
        testRemoveValue(&list, 5, list.size);
        testRemoveValue(&list, 5, list.size);
        testRemoveValue(&list, 5, list.size);
        testRemoveValue(&list, -14, list.size - 1);
        testRemoveValue(&list, 100, list.size - 1);
        testRemoveValue(&list, 54, list.size - 1);
        testRemoveValue(&list, 5, list.size);
        testRemoveValue(&list, 100, 0);
        testRemoveValue(&list, 54, 0);
        printf("--- Тесты завершены ---\n");
}


void testAddValue(List* list, int value, int except) {
        addValue(list, value);
        
        if (except != (*list).size) {
                printf("Тест не пройден\n");
                exit(-1);
        }
        printList(list);
}

void testRemoveValue(List* list, int value, int except) {
        removeValue(list, value);
        if (except != (*list).size) {
                printf("Тест не пройден\n");
                exit(-1);
        }
        printList(list);
}


void main(int argc, char *argv[]) {
        for (int i = 0; i < argc; i++) {
                if (strcmp(argv[i], "--test") == 0) {
                        runAllTests();
                        return ; 
                }
        }

        List list;
        initList(&list);
        
        printf("0 – выйти\n1 – добавить значение в сортированный список\n2 – удалить значение из списка\n3 – распечатать список\n\n");
        
        char inp;
        printf("Введите команду: ");
        scanf("%c", &inp); 
        
        while (inp != '0') {
                int value;
                switch (inp) {
                        case '1':
                                printf("Добавить: ");
                                scanf("%d", &value); 
                                
                                addValue(&list, value);
                                
                                break;
                        
                        case '2':
                                printf("Удалить: ");
                                scanf("%d", &value); 
                                
                                removeValue(&list, value);
                                
                                break;
                        
                        case '3':
                                printf("Список: ");
                                printList(&list);
                                break;
                        default:
                                printf("Введите команду: ");
                                break;
                }
                scanf("%c", &inp);
        }
}
