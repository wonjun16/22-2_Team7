/*
main
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"

int main() {
    int menu;   // menu

    //test data for 3-2
    PEOPLE test1 = { 11, "2020-05-11", "yes", "Jihu Paik", 30, "Gachon University", "student" };
    PEOPLE test2 = { 31, "2020-05-11", "yes", "Jihuu Paik", 50, "Gachon University", "student" };
    PEOPLE test3 = { 1, "2020-05-11", "yes", "Jihuuy Paik", 50, "Gachon University", "student" };

    while (1)
    {
        //setup
        PEOPLE peoples[30];
        setupArray(peoples);
        NODE* head = create_Node(peoples);
        setupLinkedList(head, peoples, 30);

        //setup linked list for 3-1, 3-2
        PEOPLE people_for_LL[30];
        setupArray(people_for_LL);
        sortTagOrder(people_for_LL);
        NODE* head_3 = create_Node(people_for_LL);
        setupLinkedList(head_3, people_for_LL, 30);

        //size of array
        int size = sizeof(peoples) / sizeof(PEOPLE);

        printf("\n");
        printf("-----------------------------------------------------------------\n");
        printf("-  1. Search Choi   -\n");
        printf("-  2. Search Gachon University   -\n");
        printf("-  3. Sort the data by Tag(#) Number   -\n");
        printf("-  4. Create Linked List using sorted data by Tag(#) Number   -\n");
        printf("-  5. Sort the data by Age Group   -\n");
        printf("-  6. Creating TXT file using sorted data by Age Group   -\n");
        printf("-  7. Delete Choi   -\n");
        printf("-  8. Insert Paik   -\n");
        printf("-  9. End of the Program   -\n");
        printf("-----------------------------------------------------------------\n");
        printf("Choose : ");

        scanf_s("%d", &menu);
    
        switch (menu)
        {
        case 1:  //Search Choi
            searchChoiArray(peoples);
            searchChoiLinkedList(head);
            break;
        case 2:  //Search Gachon University
            searchGachonArray(peoples);
            searchGachonLinkedList(head);
            break;
        case 3:  //Sort the data by Tag(#) Number
            printf("Sort data with tag ascending order using array\n");
            sortTagOrder(peoples);
            printArray(peoples, size);
            break;
        case 4:  //Create Linked List using sorted data by Tag(#) Number
            //
            break;
        case 5:  //Sort the data by Age Group
            sortGroupOrder(peoples);
            break;
        case 6:  //Creating TXT file using sorted data by Age Group
            write_sorted_data(peoples);
            break;
        case 7:  //Delete Choi
            sortTagOrder(peoples);
            delete_choi_array(peoples, &size);
            delete_choi_LL(&head_3);
            deleteLL(&head_3);
            break;
            
        case 8:  //Insert Paik
            sortTagOrder(peoples);
            insert_paik_array(test1, peoples, size);

            insert_paik_LL(&head_3, test1);
            insert_paik_LL(&head_3, test2);
            insert_paik_LL(&head_3, test3);

            deleteLL(&head_3);
            break;
       
        case 9:  //End the Program 
            puts("End the Program.");
            deleteLL(&head);
            return 0;

        default:
            puts("Wrong!");
            break;
        }
    }

    system("pause");
    return 0;
}