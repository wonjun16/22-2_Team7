/*new_data파일 읽어서 structure array, linked list에 저장
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "data_structure.h"

int index = 0;

void openedFILE_array(people PEOPLE[], char inputFileName[]) {
	FILE* inputFILE;
	inputFILE = fopen(inputFileName, "r");
	if (inputFILE == NULL) {
		printf("Fail to open file.\n");
		exit(1);
	}
	while (fscanf(inputFILE, "%d %s %s %s %d %s %s", &(PEOPLE[index].tag), PEOPLE[index].data_registered, PEOPLE[index].fee_paid,
		PEOPLE[index].name, &(PEOPLE[index].age), PEOPLE[index].organization, PEOPLE[index].job)!=EOF) {
		index++;
	}
}

//LL_people* openedFILE_LL() {
//	people* copyPEOPLE = openedFILE_array();
//	LL_people* head;
//	for (int i = 0; i <= index; i++) {
//		//createNode();
//	}
//}