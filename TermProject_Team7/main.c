#include "dataSetup.h"

void main() {
	PEOPLE peoples[100];
	setupArray(peoples);
	
	NODE* head = create_Node(peoples);
	setupLL(head, peoples);

	deleteLL(head);
}