/*
3-1 All ¡°Choi¡±s canceled registration. Remove the data from
the array (fill the memory)
the linked list
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"

////delete data index at i (in array)
//void deleteAt(PEOPLE people[], int index, int size) {
//
//	for (int i = index; i < size - 1; i++) {
//		people[i] = people[i + 1];
//	}
//
//}
//
////delete data if name="Choi" in array
//void delete_choi_array(PEOPLE people[], int* size) {
//
//	int i = 0;
//	int size = 0;
//
//	while (i < *size) {
//
//		if (strstr(people[i].name, "Choi")) {
//			deleteAt(people, i, *size);
//			(*size)--;
//			i--;
//		}
//
//		i++;
//	}
//
//	printArray(people, *size);
//
//}
//
////delete data if name="Choi" in linked list
//void delete_choi_LL(NODE** head) {
//	NODE* ptr = (*head)->next;
//	NODE* pre_ptr = *head;
//
//	//if node's name = "Choi" then delete data
//	while (ptr->next) {
//		if (strstr(ptr->people.name, "Choi")) {
//			pre_ptr->next = ptr->next;
//			free(ptr);
//			ptr = pre_ptr->next;
//		}
//		else {
//			pre_ptr = pre_ptr->next;
//			ptr = ptr->next;
//		}
//
//	}
//
//	//last node
//	if (strstr(ptr->people.name, "Choi")) {
//		pre_ptr->next = NULL;
//		free(ptr);
//	}
//
//	printLL(*head);
//}
//
////for test
////void main() {
////	setupArray(people);
////	sort_tag_order(people);
////	delete_choi_array(people, &size);
////
////	printf("\n");
////
////	setupArray(people_for_LL);
////	sort_tag_order(people_for_LL);
////	head = create_Node(people_for_LL);
////	setupLinkeList(head, people_for_LL, 30);
////
////	delete_choi_LL(&head);
////}