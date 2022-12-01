#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct data {

    int tag;   //registration number-unique integer
    char dataRegistered[20];   //yyyy-mm-dd
    char feePaid[10];   //"yes" or "no"
    char name[25];   //char[25]
    int age;   //integer
    char organization[30];   //company or university; char[30]
    char job[15];   //student, professor, staff, executive, engineer, marketer; char[15]

} PEOPLE;

typedef struct node {

    PEOPLE people;
    struct node* next;

}NODE;

struct node* create_Node(PEOPLE* people);
void printPeople(PEOPLE p);
void setupArray(PEOPLE peoples[]);
void setupLL(NODE* head, PEOPLE peoples[]);
void deleteLL(NODE* head);