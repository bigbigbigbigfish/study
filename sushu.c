#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int prime(int num) {
		for (int j = 2; j <= num; j++){
			if (num%j == 0){
				printf("%d��������\n", num);
				break;
			}
			else {
				printf("%d������\n", num);
				break;
			}
		}
	return num;
}
 
int main() {
	int i = 0;
	printf("������һ������\n");
	scanf("%d", &i);
	prime(i);
	system("pause");
	return 0;
}