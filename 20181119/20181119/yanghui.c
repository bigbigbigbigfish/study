#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int arr[100][100];

void Yanghui(int n) {
	for (int i = 1; i < n; ++i) {
		for (int j = 1; j < i + 1; ++j){
			if (j == 0 || j == 1) {
				arr[i][j] = 1;
				printf("%d ", arr[i][j]);
			}
			else {
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
				printf("%d ", arr[i][j]);
			}
		}
		printf("\n");
	}
}


int main() {
	Yanghui(10);
	system("pause");
	return 0;
}