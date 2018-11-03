#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int swap(int *px, int *py) {
	int tmp = 0;
	tmp = *px;
	*px = *py;
	*py = tmp;
	return 0;
}

int main() {
	int x;
	int y;
	scanf("%d%d", &x, &y);
	swap(&x, &y);
	printf("%d%d", x, y);
	system("pause");
	return 0;
}