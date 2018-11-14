#include<stdio.h>

int strlen(char*num) {
	if (*num == 0) {
		return 0;
	}else
	return strlen(++num) + 1;
}

int main() {
	int ret = 0;
	char arr[] = "asdfgwdadahjk";
    ret = strlen(arr);
	printf("%d\n", ret);
	system("pause");
	return 0;
}