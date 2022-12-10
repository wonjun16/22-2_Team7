//8번 : 각 자료구조에 대해 "paik"를 삽입.(정렬순서에 따라서) array, LL
//LL_people* createNode(int tag, char data_registered[], char fee_paid[], char name[], int age, char organization[], char job[])
#include "insert_paik.h"

//test data set
//PEOPLE test1 = { 11, "2020-05-11", "yes", "Jihu Paik", 30, "Gachon University", "student"};
//PEOPLE test2 = { 31, "2020-05-11", "yes", "Jihuu Paik", 50, "Gachon University", "student" };
//PEOPLE test3 = { 1, "2020-05-11", "yes", "Jihuuy Paik", 50, "Gachon University", "student" };
//PEOPLE people[30];
//PEOPLE* insert_people;
//int size = sizeof(people) / sizeof(PEOPLE);
//
//PEOPLE people_for_LL[30];
//NODE* head;

//insert_data with name "Paik". Must use for sorted array
void insert_paik_array(PEOPLE data, PEOPLE people[], int size) {
	int i = 0;
	int flag = 0; //insert data only once
	PEOPLE* new_people = (PEOPLE*)malloc(sizeof(PEOPLE) * (size + 1));

	while (i < size + 1) {
		if ((people[i - 1].tag <= data.tag) && (people[i].tag >= data.tag) && flag==0) {
			new_people[i] = data;
			flag = 1;
			i++;
		}
		else {
			new_people[i] = people[i - flag];
			i++;
		}
	}

	printArray(new_people, size + 1);
}

//insert_data with name "Paik". Must use for sorted linked list
void insert_paik_LL(NODE** head, PEOPLE data) {
	NODE* pre_ptr = *head;
	NODE* ptr = (*head)->next;
	NODE* newNode = create_Node(&data);

	while (ptr->next) {
		if (ptr->people.tag >= data.tag && pre_ptr->people.tag <= data.tag) {
			pre_ptr->next = newNode;
			newNode->next = ptr;
			break;
		}

		pre_ptr = pre_ptr->next;
		ptr = ptr->next;
	}

	//if data's tag > all tags in linked list
	if (ptr->people.tag < data.tag) {
		ptr->next = newNode;
	}

	printLL(*head);
}

//for test
//void main() {
//	setupArray(people);
//	sort_tag_order(people);
//	insert_paik_array(test1, people, size);
//
//	setupArray(people_for_LL);
//	sort_tag_order(people_for_LL);
//	head = create_Node(people_for_LL);
//	setupLL(head, people_for_LL, 30);
//	insert_paik_LL(&head, test1);
//	printf("\n");
//	insert_paik_LL(&head, test2);
//	printf("\n");
//	insert_paik_LL(&head, test3);
//}