//8번 : 각 자료구조에 대해 "paik"를 삽입.(정렬순서에 따라서) array, LL
//LL_people* createNode(int tag, char data_registered[], char fee_paid[], char name[], int age, char organization[], char job[])
#define CRT_SECURE_NO_WARNINGS
#include "data_structure.h"
#include<string.h>
people* insertPAIK_array(people PEOPLE[]) {
	people updata_PEOPLE[31];
	people paik;
	paik.tag = 31; strcpy(paik.data_registered, "2020-10-16"); strcpy(paik.fee_paid, "yes"); 
	strcpy(paik.name, "Andy Paik"); paik.age = 24; strcpy(paik.organization, "Gachon University"); strcpy(paik.job, "student");

	for (int i = 0; i < 30; i++) {
		updata_PEOPLE[i].tag = PEOPLE[i].tag;
		strcpy(updata_PEOPLE[i].data_registered, PEOPLE[i].data_registered);
		strcpy(updata_PEOPLE[i].fee_paid, PEOPLE[i].fee_paid);
		strcpy(updata_PEOPLE[i].name, PEOPLE[i].name);
		updata_PEOPLE[i].age = PEOPLE[i].age;
		strcpy(updata_PEOPLE[i].organization, PEOPLE[i].organization);
		strcpy(updata_PEOPLE[i].job, PEOPLE[i].job);
	}
	updata_PEOPLE[30].tag = paik.tag;
	strcpy(updata_PEOPLE[30].data_registered, paik.data_registered);
	strcpy(updata_PEOPLE[30].fee_paid, paik.fee_paid);
	strcpy(updata_PEOPLE[30].name, paik.name);
	updata_PEOPLE[30].age = paik.age;
	strcpy(updata_PEOPLE[30].organization, paik.organization);
	strcpy(updata_PEOPLE[30].job, paik.job);

	return updata_PEOPLE;
}