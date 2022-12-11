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

int main(void) {
    node* ptr = node* head;
    node* new = NULL;

    for (int i = 0; i < 30; i++)
    {
        new = (NODE*)malloc(sizeof(NODE));
        new->people = people[i];

        ptr->next = new;
        ptr = new;
    }
    new->next = NULL;
}
