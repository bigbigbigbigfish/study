#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



int year(int i) {
	scanf("%d", &i);
	if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
		printf("%d������\n", i);
	}
	else {
		printf("%d��������\n", i);
	}
	return year;
}

int main() {
	int i = 0;
	year(i);
	system("pause");
	return 0;
}