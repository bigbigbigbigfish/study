

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main() {
	int num = 0;
	int i = 0;
	int tmp = 0;
	scanf("%d", &num);
	printf("ż��λΪ");
	for (i = 31; i >= 0; i -= 2) {
		tmp = (num >> i) & 0x1;
		printf("%d ", tmp);
	}printf("\n");
	printf("����λΪ");
	for (i = 30; i >= 0; i -= 2) {
		tmp = (num >> i) & 0x1;
		printf("%d ", tmp);
	}
	system("pause");
	return 0;

}




