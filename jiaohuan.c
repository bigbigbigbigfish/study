#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int swap(int *px, int *py) {
	int tmp = *px;
	*px = *py;
	*py = tmp;
	return 0;
}


int main() {
	int x, y;
	printf("请输入两个数字：\n");
	scanf("%d%d", &x, &y);
	swap(&x, &y);
	printf("%d%d", x, y);
	system("pause");
	return 0;
}
