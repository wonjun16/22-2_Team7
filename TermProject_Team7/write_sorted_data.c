//Write to sorted data to a text file Ãß°¡
#include "write_sorted_data.h"

void write_sorted_data(PEOPLE peoples[]) {
    //sort_for_groupOrder 
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

    // sorted data -> File write
    FILE* fp = fopen("test2.txt", "w");
    if (fp == NULL)
        printf("\n File could not be opend");
    else {
        for (int i = 0; i < 30; i++) {
            fprintf(fp, "%d/%s/%s/%s/%d/%s/%s\n", peoples[i].tag, peoples[i].dataRegistered,
                peoples[i].feePaid, peoples[i].name, peoples[i].age, peoples[i].organization,
                peoples[i].job);
        }
        fclose(fp);
        // printf("Read Success");
    }
}