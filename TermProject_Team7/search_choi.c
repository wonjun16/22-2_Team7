/*
2. 각 자료구조에 대해 choi 서치
linked list, sturct array에 대해 각각 구현
*/

//----- search choi
void searchChoiArray(PEOPLE* people) {

    printf("Search Choi using Array \n");
    int i = 0;
    while (i < 30) {
        if (strstr((people + i)->name, "Choi") != NULL) { //if name include 'choi', data output
            printPeople(*(people + i));
        }
        i++;
    }
    printf("\n");
}

void searchChoiLinkedList(NODE* head) {
   NODE* tmp = head->next; //cursor
    printf("Search Choi using LinkedList \n");
    while (tmp) {
        if (strstr(tmp->people.name, "Choi") != NULL) { //if name include 'choi', data output
            printPeople(tmp->people);
        }
        tmp = tmp->next; //next node
    }
    printf("\n");
}


//main

int main(){
  searchChoiArray(peoples);
   searchChoiLinkedList(head);
