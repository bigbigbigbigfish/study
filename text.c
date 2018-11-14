#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int isshuixian(int num) {
	int tmp = num; 
	int x1 = num % 10;
	num /= 10;
	int x2 = num % 10;
	num /= 10;
	int x3 = num % 10;
	if (x1*x1*x1 + x2*x2*x2 + x3*x3*x3 == tmp){
		return 1;
	}
	return 0;
}

int main() {
	for (int i = 100; i < 1000; i++) {
		if (isshuixian(i)){
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}