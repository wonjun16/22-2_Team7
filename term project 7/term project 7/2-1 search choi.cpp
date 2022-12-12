/*
2-1 search choi
Search for ¡°Choi¡± (if found, print all information about the persons)
in the array
In the linked list
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"

/*in the array*/
void searchChoiArray(PEOPLE* people) {

    printf("Search Choi using Array \n");
    int i = 0;
    while (i < 30) {
        if (strstr((people + i)->name, "Choi") != NULL) { //if name include 'choi', data output
            printPeople(*(people + i));
        }
        i++;
    }
    printf("\n");
}

/*in the linked list*/
void searchChoiLinkedList(NODE* head) {
    NODE* tmp = head->next; //cursor
    printf("Search Choi using LinkedList \n");
    while (tmp) {
        if (strstr(tmp->people.name, "Choi") != NULL) { //if name include 'choi', data output
            printPeople(tmp->people);
        }
        tmp = tmp->next; //next node
    }
    printf("\n");
}
