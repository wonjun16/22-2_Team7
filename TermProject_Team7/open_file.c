#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct data {

	int tag;	//registration number-unique integer
	char dataRegistered[20];	//yyyy-mm-dd
	char feePaid[10];	//"yes" or "no"
	char name[25];	//char[25]
	int age;	//integer
	char organization[30];	//company or university; char[30]
	char job[15];	//student, professor, staff, executive, engineer, marketer; char[15]

} PEOPLE;

typedef struct node {

	PEOPLE people;
	struct node* next;

}NODE;

struct node* createNewNode(struct node* head, struct data* data, int i) {
	struct node* newNode = (struct node*)malloc(sizeof(struct node));
	if (newNode == NULL) {
		printf("newNode == NULL \n");
		exit(1);
	}
	newNode->people.tag = data[i].tag;
	strcpy(newNode->people.dataRegistered, data[i].dataRegistered);
	strcpy(newNode->people.feePaid, data[i].feePaid);
	strcpy(newNode->people.name, data[i].name);
	newNode->people.age = data[i].age;
	strcpy(newNode->people.organization, data[i].organization);
	strcpy(newNode->people.job, data[i].job);

	newNode->next = NULL;

	return newNode;
}
