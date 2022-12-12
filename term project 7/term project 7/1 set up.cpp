/*
1. set up
Read a text file provided (conference registrations data).
Store the data in a struct array.
Store the data in a linked list.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"

struct node* create_Node(PEOPLE* people) {
    NODE* newNode = NULL;

    newNode = (NODE*)malloc(sizeof(NODE));
    if (newNode) {
        newNode->next = NULL;

        if (people != NULL) {
            newNode->people.tag = people->tag;
            strcpy(newNode->people.dataRegistered, people->dataRegistered);
            strcpy(newNode->people.feePaid, people->feePaid);
            strcpy(newNode->people.name, people->name);
            newNode->people.age = people->age;
            strcpy(newNode->people.organization, people->organization);
            strcpy(newNode->people.job, people->job);
        }
    }

    return newNode;
}

void printPeople(PEOPLE p) {
    printf("#%02d %s %-3s %-18s %-3d %-27s %-6s \n",
        p.tag, p.dataRegistered, p.feePaid, p.name, p.age, p.organization, p.job);
}

/*store the data in structure*/
void setupArray(PEOPLE peoples[]) {
    /*read the text file*/
    FILE* file = fopen("C:\\test\\registration_data.txt", "r");
    if (file == NULL) {
        printf("[ERROR] Failed to open. \n");
        exit(1);
    }

    char str[100];
    PEOPLE* p = NULL;
    for (int i = 0; fgets(str, 100, file) != NULL; i++) {
        p = &peoples[i];
        p->tag = atoi(strtok(str, "/"));
        strcpy(p->dataRegistered, strtok(NULL, "/"));
        strcpy(p->feePaid, strtok(NULL, "/"));
        strcpy(p->name, strtok(NULL, "/"));
        p->age = atoi(strtok(NULL, "/"));
        strcpy(p->organization, strtok(NULL, "/"));
        strcpy(p->job, strtok(NULL, "\n"));
    }
    fclose(file);
}

/*store the data in linked list*/
void setupLinkedList(NODE* head, PEOPLE peoples[], int size) {
    int i = 0;
    NODE* ptemp;
    NODE* newnode = (NODE*)malloc(sizeof(NODE));
    head->next = newnode;
    newnode->people = peoples[0];
    for (i = 0; i < size - 1; i++)
    {
        ptemp = newnode;
        newnode = (NODE*)malloc(sizeof(NODE));
        newnode->people = peoples[i + 1]; //save members's value to newnode->member.
        ptemp->next = newnode;   //link previous node with new node.
        if (i == size - 2)
        {
            newnode->next = NULL;   //next of final node is NULL.
        }
    }
}

//fuction for update 
void printArray(PEOPLE people[], int size) {
    for (int i = 0; i < size; i++) {
        printPeople(people[i]);
    }

    printf("\n");
}

void printLL(NODE* head) {
    NODE* ptr = head->next;

    while (ptr)
    {
        printPeople(ptr->people);
        ptr = ptr->next;
    }

    printf("\n");
}

//reset the LinkedList
void deleteLL(NODE** head) {

    NODE* nptr = (*head)->next, * prev = *head;
    while (nptr) {
        free(prev);
        prev = nptr;
        nptr = nptr->next;
    }
}