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
    printf("#%02d %s %-3s %-18s %-3d %-25s %-6s \n",
        p.tag, p.dataRegistered, p.feePaid, p.name, p.age, p.organization, p.job);
}

void setupArray(PEOPLE peoples[]) {
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
    printf("Setup Array succesful. \n\n");
}

void setupLL(NODE* head, PEOPLE peoples[]) {
    int i = 0;
    NODE* ptemp;
    NODE* newnode = (NODE*)malloc(sizeof(NODE));
    head->next = newnode;
    newnode->people = peoples[0];
    for (i = 0; i < 30 - 1; i++)
    {
        ptemp = newnode;
        newnode = (NODE*)malloc(sizeof(NODE));
        newnode->people = peoples[i + 1]; //save members's value to newnode->member.
        ptemp->next = newnode;   //link previous node with new node.
        if (i == 30 - 2)
        {
            newnode->next = NULL;   //next of final node is NULL.
        }
    }
    printf(">>Creating linked list successful.\n");
    //NODE* ptr = head->next;
    //while (ptr) //testing all node is correctly made.
    //{
    //    printPeople(ptr->people);
    //    ptr = ptr->next;
    //}
}

void deleteLL(NODE* head) {
    NODE* nptr = head->next, * prev = head;
    while (nptr) {
        free(nptr);
        prev = nptr;
        nptr = nptr->next;
    }
}