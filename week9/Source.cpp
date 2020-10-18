#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

char x[100];
int chk_1, chk_2, chk_3;

int  frist(int i) {
	if (x[i] == '{')chk_1++;
	if (x[i] == '(')chk_2++;
	if (x[i] == '[')chk_3++;
	return chk_1; 
	return chk_2; 
	return chk_3;
}

int  secound(int i) {
	if (x[i] == '}')chk_1--;
	if (x[i] == ')')chk_2--;
	if (x[i] == ']')chk_3--;
	return chk_1;
	return chk_2;
	return chk_3;
}

int  main() {
	int i;
	scanf("%[^\n]", x);
	for (i = 0; i < strlen(x); i++) {
		if (x[i] == '{' || x[i] == '[' || x[i] == '(') {
			frist(i);
		}
		else if (x[i] == '}' || x[i] == ']' || x[i] == ')') {
			secound(i);
		}
	}
	if (chk_1 != 0 || chk_2 != 0 || chk_3 != 0) {
		if (chk_1 != 0)printf("Syntax error with {\n");
		if (chk_2 != 0)printf("Syntax error with (\n");
		if (chk_3 != 0)printf("Syntax error with [\n");
	}
	else printf("No syntax error");
}