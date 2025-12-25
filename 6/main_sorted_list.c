#include "test/test_sorted_list.h"

#include <string.h>

int main(int argc, char* argv[])
{
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--test") == 0) {
            int res = testRunAll();
            return res;
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

    return 0;
}
