#pragma once

typedef struct data {

    int tag;   //registration number-unique integer
    char dataRegistered[20];   //yyyy-mm-dd
    char feePaid[10];   //"yes" or "no"
    char name[25];   //char[25]
    int age;   //integer
    char organization[30];   //company or university; char[30]
    char job[15];   //student, professor, staff, executive, engineer, marketer; char[15]

} PEOPLE;

typedef struct node {

    PEOPLE people;
    struct node* next;

}NODE;


//1. setup
struct node* create_Node(PEOPLE* people);
void printPeople(PEOPLE p);
void setupArray(PEOPLE peoples[]);
//void setupLinkedList(NODE* head, PEOPLE peoples[]);
void setupLinkedList(NODE* head, PEOPLE peoples[], int size);

//2-1. searach Choi
void searchChoiArray(PEOPLE* people);
void searchChoiLinkedList(NODE* head);

//2-2. search Gachon
void searchGachonArray(PEOPLE* people);
void searchGachonLinkedList(NODE* head);

//2-3. sort tag num
void sortTagOrder(PEOPLE peoples[]);

//2-5. sort data age froup
void sortGroupOrder(PEOPLE peoples[]);

//2-6. create txt file
void write_sorted_data(PEOPLE peoples[]);

//print , delete data
void printArray(PEOPLE people[], int size);
void printLL(NODE* head);
void deleteLL(NODE** head);

//delete choi 
void deleteAt(PEOPLE people[], int index, int size);
void delete_choi_array(PEOPLE people[], int* size);
void delete_choi_LL(NODE** head);

//insert paik
void insert_paik_array(PEOPLE data, PEOPLE people[], int size);
void insert_paik_LL(NODE** head, PEOPLE data);