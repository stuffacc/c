#include "test_sorted_list.h"

int compareIntAscending(const void* a, const void* b)
{
    int x = *((const int*)a);
    int y = *((const int*)b);

    return x - y;
}

void testInitList()
{
    List list;
    initList(&list);

    int res = (list.head == NULL) && (list.size == 0);

    assert(res);
}

void testCreateNode()
{
    int value = 5;
    Node* node = createNode(value, NULL);

    int res = (node->next == NULL) && (node->value == value);

    assert(res);
}

void testSize()
{
    int arr[] = { 0, 25, 25, -25, 2, 5, 6, 8 };
    int sizeArr = sizeof(arr) / sizeof(int);

    List list;
    initList(&list);

    for (int i = 0; i < sizeArr; i++) {
        addValue(&list, arr[i]);
    }

    int sizeList = list.size;

    assert(sizeList == sizeArr);
}

void testAddValueInSortedOrder()
{
    int arr[] = { 0, 25, 25, -25, 2, 5, 6, 8 };
    int sizeArr = sizeof(arr) / sizeof(int);

    List list;
    initList(&list);

    for (int i = 0; i < sizeArr; i++) {
        addValue(&list, arr[i]);
    }

    qsort(arr, sizeArr, sizeof(int), compareIntAscending);

    Node* iter = list.head;
    for (int i = 0; i < sizeArr; i++) {
        assert(iter != NULL);
        assert(iter->value == arr[i]);

        iter = iter->next;
    }
}

void testRemoveNoValueInList()
{
    int arr[] = { 0, 25, 25, -25, 2, 5, 6, 8 };
    int sizeArr = sizeof(arr) / sizeof(int);

    List list;
    initList(&list);

    for (int i = 0; i < sizeArr; i++) {
        addValue(&list, arr[i]);
    }

    int oldSize = list.size;

    removeValue(&list, -2342);

    int newSize = list.size;

    assert(oldSize == newSize);
}

void testRemoveValueOneTimeInList()
{
    int arr[] = { 0, 25, 25, -25, 2, 5, 6, 8 };
    int sizeArr = sizeof(arr) / sizeof(int);

    List list;
    initList(&list);

    for (int i = 0; i < sizeArr; i++) {
        addValue(&list, arr[i]);
    }

    int oldSize = list.size;

    removeValue(&list, 0);

    int newSize = list.size;

    assert(oldSize - 1 == newSize);
}

void testRemoveMoreOneTimeInList()
{
    int arr[] = { 0, 25, 25, 25, -25, 2, 5, 6, 8 };
    int sizeArr = sizeof(arr) / sizeof(int);

    List list;
    initList(&list);

    for (int i = 0; i < sizeArr; i++) {
        addValue(&list, arr[i]);
    }

    int oldSize = list.size;

    removeValue(&list, 25);

    int newSize = list.size;

    assert(oldSize - 3 == newSize);
}

int testRunAll()
{
    printf("---------- TESTS ----------\n");

    testInitList();
    printf("Test 1 PASSED\n");

    testCreateNode();
    printf("Test 2 PASSED\n");

    testSize();
    printf("Test 3 PASSED\n");

    testAddValueInSortedOrder();
    printf("Test 4 PASSED\n");

    testRemoveNoValueInList();
    printf("Test 5 PASSED\n");

    testRemoveValueOneTimeInList();
    printf("Test 6 PASSED\n");

    testRemoveMoreOneTimeInList();
    printf("Test 7 PASSED\n");

    printf("\n\nALL TESTS PASSED\n");

    return EXIT_SUCCESS;
}
