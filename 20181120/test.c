#include <stdio.h>


int counte_one_bits(unsigned int num) {
	int count = 0;
	while (num % 2 == 1 || num % 2 == -1) {
		++count;
		num = num / 2;
	}
	return count;
}


int main() {
	//���ز�����������1�ĸ���
	printf("%d", counte_one_bits(15));
	system("pause");
	return 0;	
}