/*
4. array의 자료들을 tag순서로 정렬
*/
#include "sort_tag_order.h"

void sort_tag_order(PEOPLE peoples[]) {
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
    printArray(peoples, 30);
}