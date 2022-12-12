#include "create_LL_for_sortedData.h"
#include "sort_tag_order.h"

void create_LL_for_sortedData(PEOPLE peoples[]) {
    PEOPLE temp;

    for (int i = 0; i < 29; i++) {
        for (int j = 0; j < 29; j++) {
            if (peoples[j].tag > peoples[j + 1].tag) { // Use bubble sort 
                // swap
                temp = peoples[j];
                peoples[j] = peoples[j + 1];
                peoples[j + 1] = temp;
            }
        }
    }

    NODE* head = create_Node(peoples);
    setupLL(head, peoples, 30);
    printLL(head);
}