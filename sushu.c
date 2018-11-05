#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int prime(int num) {
		for (int j = 2; j <= num; j++){
			if (num%j == 0){
				printf("%d不是素数\n", num);
				break;
			}
			else {
				printf("%d是素数\n", num);
				break;
			}
		}
	return num;
}
 
int main() {
	int i = 0;
	printf("请输入一个数字\n");
	scanf("%d", &i);
	prime(i);
	system("pause");
	return 0;
}