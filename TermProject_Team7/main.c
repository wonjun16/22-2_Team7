#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "data_structure.h"
void main() {
	PEOPLE peoples[100];
	setupArray(peoples);
	
	NODE* head = create_Node(peoples);
	setupLL(head, peoples);

	deleteLL(head);
}