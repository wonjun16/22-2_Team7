/*
6. ���������� �̿��ؼ� age�� group order(10, 20, 30...)�� ����
*/
#include "sort_for_groupOrder.h"

void sort_for_groupOrder(PEOPLE peoples[]) {
    PEOPLE hold;

    for (int i = 0; i < 30; i++) {
        int smallest = i;
        for (int j = i + 1; j < 30; j++) { // Use selection sort
            if (peoples[j].age / 10 < peoples[smallest].age / 10)
                smallest = j;
        }
            // swap
            hold = peoples[i];
            peoples[i] = peoples[smallest];
            peoples[smallest] = hold;
            printPeople(peoples[i]);
    }
}