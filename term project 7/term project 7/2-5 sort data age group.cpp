/*
2-5 Sort the data in the array in age group order (using selection sort)
>> ¡°age group¡± means 10, 20, 30,¡¦.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"

    void sortGroupOrder(PEOPLE peoples[]) { // selection sort -> age

        PEOPLE hold;
        for (int i = 0; i < 30; i++) {
            int smallest = i;
            for (int j = i + 1; j < 30; j++) {
                if (peoples[j].age / 10 < peoples[smallest].age / 10)
                    smallest = j;
            }
            hold = peoples[i];
            peoples[i] = peoples[smallest];
            peoples[smallest] = hold;
        }
        for (int i = 0; i < 30; i++) {
            //if (peoples[i].age / 10 == 2)
              //  printf("Age from 20 to 29 \n");
            printPeople(peoples[i]);
        }
    }


