#include<stdio.h>
int  fib(int n) {
	int a = 1;
	int b = 0;
	int c = 0;
	if (n == 0){
		return 0;
	}
	if (n ==1){
		return 1;
	}
	for (int i = 2; i <= n; i++) {
		c = a + b;
		b = a;
		a = c;
	}
	return c;
}

int main() {
	printf("%d", fib(5));
	system("pause");
	return 0;
}
//
//int fib(int n) {
//	if (n==1||n==2){
//		return 1;
//	}
//	return fib(n - 1) + fib(n-2);
//}
//
//int main() {
//	printf("%d\n", fib(5));
//	system("pause");
//	return 0;
//}