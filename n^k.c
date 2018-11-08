#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int pow(int n, int k) {
	int sum;
	if (k == 0) {
		return 1;
	}
	sum = n*pow(n, k - 1);
	return sum;
}

int main() {
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int ret = pow(a, b);
	printf("%d", ret);
	system("pause");
	return 0;
}