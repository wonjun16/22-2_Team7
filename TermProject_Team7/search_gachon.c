/*
3. 각 자료구조에 대해 gachon university 서치
linked list, sturct array에 대해 각각 구현
*/

//---- search gachon
void searchGachonArray(PEOPLE* people) {
    printf("Search Gachon University using Array \n");
    int i = 0;
    while (i < 100) {
        if (strcmp((people + i)->organization, "Gachon University") == NULL) { //if organization is 'gachon university', data output
            printPeople(*(people + i));
        }
        i++;
    }
    printf("\n");
}

void searchGachonLinkedList(NODE* head) {
    NODE* tmp = head->next; //cursor
    printf("Search Gachon University using LinkedList \n");
    while (tmp) {
        if (strcmp(tmp->people.organization, "Gachon University") == NULL) { //if organization is 'gachon university', data output
            printPeople(tmp->people);
        }
        tmp = tmp->next;
    }
    printf("\n");
}

//main

int main(){
   searchGachonArray(peoples);
   searchGachonLinkedList(head);
