#include<stdio.h>

int main() {
	char killer;
	for (killer = 'a'; killer <= 'd'; ++killer) {
		if ((killer != 'a') + (killer == 'c') + (killer == 'c') + (killer != 'c') == 3) {
			printf("killer is %c", killer);
		}
	}
	system("pause");
	return 0;
 }