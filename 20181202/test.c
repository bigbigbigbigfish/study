#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>




//有一个字符数组的内容为:"student a am i",
//			请你将数组的内容改为"i am a student".
//			要求：
//			不能使用库函数。
//			只能开辟有限个空间（空间个数和字符串的长度无关）。
//
//			student a am i
//			i ma a tneduts
//			i am a student


int Resreve(char* stare, char* end) {
	char tmp;
	while (stare < end) {
		tmp = *stare;
		*stare = *end;
		*end = tmp;
		++stare;
		--end;
	}
}

int Length(char* arr) {
	int i = 0;
	while (arr[i] != '\0'){
		++i;
	}
	return i;
}

int main() {
	char arr[] = "student a am i";
	int len = Length(arr);
	Resreve(arr, arr + len - 1);
	printf("%s\n", arr);
	int s = 0;
	int* p;
	int* q;
	for (int i = 0; i < len; ++i) {
		if ((s == 0) && (arr[i] != ' ')) {
			p = arr + i;
			s = 1;
		}
		else if ((s == 1) && (arr[i] == ' ')) {
			q = arr + i - 1;
			s = 0;
			Resreve(p, q);
		}
	}
	Resreve(p, arr + len - 1);
	printf("%s", arr);
	system("pause");
	return 0;
}