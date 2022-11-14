#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int key;
	struct node* next;
}NODE;

NODE* createNode(int x) {
	NODE* node = (NODE*)malloc(sizeof(NODE));
	node->key = x;
	node->next = NULL;
	return node;
}

void displayList(NODE* head) {
	NODE* ptr = head;
	int index = 1;
	while (ptr) {
		printf("%d번째 데이터는 %d입니다\n", index, ptr->key);
		ptr = ptr->next;
		index++;
	}
}

int lengthTest(NODE* head) {
	NODE* ptr = head;
	int length = 0;
	while (ptr) {
		ptr = ptr->next;
		length++;
	}
	return length;
}

void searchTest(NODE* head, int searchKey) {
	NODE* ptr = head;
	int searchResult = 0;
	while (ptr) {
		if (ptr->key == searchKey) {
			searchResult++;
		}
		ptr = ptr->next;
	}
	if (searchResult) {
		printf("Linked List안에 %d개의 %d데이터가 있습니다.\n", searchResult, searchKey);
	}
	else {
		printf("Linked List안에 %d데이터가 없습니다.\n", searchKey);
	}
}

void push(NODE** head, int data) {
	NODE* node = createNode(data);
	node->next = *head;
	*head = node;
}

void appendNode(NODE** head, int data) {
	NODE* node = createNode(data);
	NODE* ptr = *head;
	if (ptr == NULL) {
		*head = node;
	}
	else {
		while (ptr->next) {
			ptr = ptr->next;
		}
	}
	ptr->next = node;
}

//void deleteNode()

void insertNode(NODE** head, int data) {
	NODE* node = createNode(data), * old_ptr=NULL, * ptr = *head;
	while (ptr->next) {
		if (ptr->key == data) {
			printf("data is already exist.\n");
			break;
		}
		if (ptr->key < data) {
			old_ptr = ptr;
			ptr = ptr->next;
		}
		else {
			old_ptr->next = node;
			node->next = ptr;
			break;
		}
	}
	if(!(ptr->next))
		ptr->next = node;
}

void main() {
	int length;
	NODE* node1 = createNode(100);
	NODE* node2 = createNode(200);
	NODE* node3 = createNode(300);
	NODE* head = node1;

	node1->next = node2;
	node2->next = node3;

	displayList(head);

	length = lengthTest(head);
	printf("Length of Linked List : %d\n", length);

	searchTest(head, 200);

	push(&head, 10);

	displayList(head);

	appendNode(&head, 400);

	displayList(head);

	insertNode(&head, 250);
	insertNode(&head, 1000);

	displayList(head);

	free(head);
}
