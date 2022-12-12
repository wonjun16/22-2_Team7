/*
2-3 Sort the data in the array in tag# order
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"

void sortTagOrder(PEOPLE peoples[]) {

    PEOPLE temp;
 
    for (int i = 0; i < 29; i++) {
        for (int j = 0; j < 29; j++) {
            if (peoples[j].tag > peoples[j + 1].tag) { //using bubble sort 
                //swap
                temp = peoples[j];
                peoples[j] = peoples[j + 1];
                peoples[j + 1] = temp;
            }
        }
    }
}