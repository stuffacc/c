#pragma once
#include "../sorted_list.h"

#include <assert.h>

int compareIntAscending(const void* a, const void* b);

void testInitList();
void testCreateNode();
void testSize();
void testAddValueInSortedOrder();
void testRemoveNoValueInList();
void testRemoveValueOneTimeInList();
void testRemoveMoreOneTimeInList();

int testRunAll();
