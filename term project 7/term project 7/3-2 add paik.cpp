/*
3-2 One ¡°Paik¡± registered late. Add the data to
the array (in the sorted order; shift all affected data)
the linked list (in the right sorted order)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"

//insert_data with name "Paik". Must use for sorted array
void insert_paik_array(PEOPLE data, PEOPLE people[], int size) {
	int i = 0;
	int flag = 0; //insert data only once
	PEOPLE* new_people = (PEOPLE*)malloc(sizeof(PEOPLE) * (size + 1));

	while (i < size + 1) {
		if ((people[i - 1].tag <= data.tag) && (people[i].tag >= data.tag) && flag == 0) {
			new_people[i] = data;
			flag = 1;
			i++;
		}
		else {
			new_people[i] = people[i - flag];
			i++;
		}
	}

	printf("Add name Paik using array\n");
	printArray(new_people, size + 1);
}

//insert_data with name "Paik". Must use for sorted linked list
void insert_paik_LL(NODE** head, PEOPLE data) {
	NODE* pre_ptr = *head;
	NODE* ptr = (*head)->next;
	NODE* newNode = create_Node(&data);

	while (ptr->next) {
		if (ptr->people.tag >= data.tag && pre_ptr->people.tag <= data.tag) {
			pre_ptr->next = newNode;
			newNode->next = ptr;
			break;
		}

		pre_ptr = pre_ptr->next;
		ptr = ptr->next;
	}

	//if data's tag > all tags in linked list
	if (ptr->people.tag < data.tag) {
		ptr->next = newNode;
	}

	printf("Add name Paik using linked list\n");
	printLL(*head);
}