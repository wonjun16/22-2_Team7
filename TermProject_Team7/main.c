#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "file_open.h"
#include "insert_paik.h"
void main() {
	FILE* insertPaik;
	people PEOPLE[30], insertPaik_PEOPLE[31];
	char inputFileName[50] = "C:\\test\\new_data.txt";
	char insertPaikName[50] = "C:\\test\\insert_paik.txt";
	openedFILE_array(PEOPLE, inputFileName);
	insertPaik = fopen(insertPaikName, "w");

}