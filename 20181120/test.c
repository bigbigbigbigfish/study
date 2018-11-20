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
	//返回参数二进制中1的个数
	printf("%d", counte_one_bits(15));
	system("pause");
	return 0;	
}