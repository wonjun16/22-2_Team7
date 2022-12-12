/*
2-2 search gachon
Search for all from Gachon University (if found, print all information about the persons).
in the array
in the linked list
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"

/*in the array*/
void searchGachonArray(PEOPLE* people) {
    printf("Search Gachon University using Array \n");
    int i = 0;
    while (i < 100) {
        if (strcmp((people + i)->organization, "Gachon University") == NULL) { //if organization is 'gachon university', data output
            printPeople(*(people + i));
        }
        i++;
    }
    printf("\n");
}

/*in the linked list*/
void searchGachonLinkedList(NODE* head) {
    NODE* tmp = head->next; //cursor
    printf("Search Gachon University using LinkedList \n");
    while (tmp) {
        if (strcmp(tmp->people.organization, "Gachon University") == NULL) { //if organization is 'gachon university', data output
            printPeople(tmp->people);
        }
        tmp = tmp->next;
    }
    printf("\n");
}
