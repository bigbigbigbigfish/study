#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int num = 0;
	int i = 0;
	int tmp = 0;
	scanf("%d", &num);
	for (i = 31; i >= 0; i -= 1) {
		tmp = num >>i & 1;
		printf("%d ", tmp);
	}
	system("pause");
	return 0;
}
