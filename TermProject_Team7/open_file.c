#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>

struct DATA {

	int tag;	//registration number-unique integer
	char data_registered[20];	//yyyy-mm-dd
	char fee_paid[10];	//"yes" or "no"
	char name[25];	//char[25]
	int age;	//integer
	char organization[30];	//company or university; char[30]
	char job[15];	//student, professor, staff, executive, engineer, marketer; char[15]

};

struct NODE {

	int tag;	//registration number-unique integer
	char data_registered[20];	//yyyy-mm-dd
	char fee_paid[10];	//"yes" or "no"
	char name[25];	//char[25]
	int age;	//integer
	char organization[30];	//company or university; char[30]
	char job[15];	//student, professor, staff, executive, engineer, marketer; char[15]
	struct NODE* next;

};

struct NODE* createNewNode(struct NODE* head, struct DATA* data, int i) {
	struct NODE* newNode = (struct NODE*)malloc(sizeof(struct NODE));
	if (newNode == NULL) {
		printf("newNode == NULL\n");
		exit(1);
	}
	newNode->tag = data[i].tag;
	strcpy(newNode->data_registered, data[i].data_registered);
	strcpy(newNode->fee_paid, data[i].fee_paid);
	strcpy(newNode->name, data[i].name);
	newNode->age = data[i].age;
	strcpy(newNode->organization, data[i].organization);
	strcpy(newNode->job, data[i].job);

	newNode->next = NULL;

	return newNode;
}
