/*
4. array의 자료들을 tag순서로 정렬
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "data_structure.h"

void sort_tag_order(people PEOPLE[]) {

	int hold, current, start;
	
	for (start = 0; start < 30; start++) {
		int smallest = start;

		for (current = start + 1; current < 30; current++) {
			if (PEOPLE[current].tag < PEOPLE[smallest].tag)
				smallest = current;
		}

		hold = PEOPLE[start].tag;
		PEOPLE[start].tag = PEOPLE[smallest].tag;
		PEOPLE[smallest].tag = hold;
	}
}