/*
���� ���������Ͽ��� ������ ��Ȯ�ϰ� ������ �ʴ� ������ ���� 
���� ������ �б� ���� ���Ϸ� �ٲپ���.
registration_data -> new_data
new_data���Ϸ� ��������� ����.(���� registration_data�� ������� ����)
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