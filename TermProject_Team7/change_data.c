/*
기존 데이터파일에서 파일이 정확하게 읽히지 않는 문제로 인해 
기존 파일을 읽기 쉬운 파일로 바꾸었음.
registration_data -> new_data
new_data파일로 파일입출력 실행.(기존 registration_data는 사용하지 않음)
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main() {
	FILE* oldData, *newData;
	char oldDataName[30]= "C:\\test\\registration_data.txt";
	char newDataName[30] = "C:\\test\\new_data.txt";
	oldData = fopen(oldDataName, "r");
	newData = fopen(newDataName, "w");

	if (oldData == NULL) {
		printf("open file is NULL.\n");
		exit(1);
	}
	else {
		char c=fgetc(oldData);
		while (c != EOF) {
			if (c == ' ') c = '-';
			if (c == '/') c = ' ';
			fputc(c, newData);
			c = fgetc(oldData);
		}
	}
}