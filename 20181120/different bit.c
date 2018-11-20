#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n = 0;
	int m = 0;
	int count = 0;
	printf("请输入两个数\n");
	scanf("%d %d", &n, &m);
	for (int i = 31; i >=0; --i){
		if (((n >> i) & 0x1) - ((m >> i) & 0x1) != 0) {
			++count;
		}
	}
	printf("%d", count);
	system("pause");
	return 0;
}
