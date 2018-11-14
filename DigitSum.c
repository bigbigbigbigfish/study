#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Digitsum(int n) {
	int sum = 0;
	if (n < 10){
		return n;
	}
	sum = n % 10 + Digitsum(n / 10);
	return sum;
}

int main() {
	int n = 0; 
	scanf("%d", &n);
	int sum = Digitsum(n);
	printf("%d", sum);
	system("pause");
	return 0;
}