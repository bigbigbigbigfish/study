#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int mul( int num) {
	for (int i = 1; i < num; i++){
		for (int j = 1; j <= i; j++){
			printf("%d*%d", i, j, i*j);
		}
		printf("\n");
	}
	return mul;	
}

int main(){
	int num;
	printf("请输入一个数字\n");
	scanf("%d",&num);
	mul(num);
	system("pause");
	return 0;
}

