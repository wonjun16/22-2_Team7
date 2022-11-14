#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
/*
1. linked list, sturct array »ý¼º
*/

typedef struct data {

	int tag;
	char data_registered[20];
	char fee_paid[10];
	char name[50];
	int age;
	char organization[50];
	char job[50];

} people;

typedef struct data {

	int tag;
	char data_registered[20];
	char fee_paid[10];
	char name[50];
	int age;
	char organization[50];
	char job[50];
	struct data* next;

} LL_people;

LL_people* createNode(int tag, char data_registered[], char fee_paid[], char name[], int age, char organization[], char job[]) {
	data* node = (data*)malloc(sizeof(data));
	node->tag=tag;
	strcpy(node->data_registered, data_registered);
	strcpy(node->fee_paid, fee_paid);
	strcpy(node->name, name);
	node->age = age;
	strcpy(node->organization, organization);
	strcpy(node->job, job);

	node->next = NULL;
	return node;
}