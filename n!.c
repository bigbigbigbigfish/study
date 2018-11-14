#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int jiecheng(int n){
	int sum = 1;
	while (n >= 1) {
		sum = sum*n;
		--n;
	}
	return sum;
}


int main() {
	int n = 0;
	scanf("%d", &n);
	int ret=jiecheng(n);
	printf("%d", ret);
	system("pause");
	return 0;
}
