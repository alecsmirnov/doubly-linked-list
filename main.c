#include <stdio.h>

#include "list.h"

static void printIntList(List* L) {
	ListNode* iter = L->head;

	do {
		printf("%d ", *(int*)iter->data);
		iter = iter->next;
	} while (iter);

	printf("\n");
}

int main(int argc, char *argv[]) {
	List* int_L = NULL;

	listInit(&int_L, sizeof(int), NULL);

	int value = 3;
	listPushBack(int_L, (void*)&value);

	value = 4;
	listPushBack(int_L, (void*)&value);

	value = 5;
	listPushBack(int_L, (void*)&value);

	printIntList(int_L);


	ListNode* iter = int_L->head;
	iter = iter->next;

	listDeleteNode(int_L, iter);


	printIntList(int_L);

	listFree(&int_L);

	return 0;
}
