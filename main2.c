#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	FILE* fp = NULL;
	char c;
	char str[30];
	
	fp = fopen("sample.txt", "w");

	/*if(fp == NULL)
		printf("������ ������\n"); */
	
	while (fgets(str, 30, fp) != NULL)
		printf("%s", str);
	//fclose
	fclose(fp);
	
}
