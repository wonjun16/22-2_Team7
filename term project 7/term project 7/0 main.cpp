/*
main
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"

int main() {
    // 변수
    int menu;   // 메뉴

    PEOPLE peoples[30];

    //setup
    printf("[Setup finished] \n\n");
    setupArray(peoples);
    NODE* head = create_Node(peoples);
    setupLinkedList(head, peoples, 30);

    while (1)
    {
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
            sortTagOrder(peoples);
            break;
        case 4:  //Create Linked List using sorted data by Tag(#) Number
            //
            return 0;
        case 5:  //Sort the data by Age Group
            sortGroupOrder(peoples);
            return 0;
        case 6:  //Creating TXT file using sorted data by Age Group
            write_sorted_data(peoples);
            return 0;
        case 7:  //Delete Choi
           // delete_choi_array(people, &size);
           // delete_choi_LL(&head);
            return 0;
            
        case 8:  //Insert Paik
           //insert_paik_array(test1, peoples, size);
           // insert_paik_LL(&head, test1);
           // printf("\n");
           // insert_paik_LL(&head, test2);
           // printf("\n");
           // insert_paik_LL(&head, test3);
           return 0;
       
        case 9:  //End of the Program 
            puts("End of the Program.");
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