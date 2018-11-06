#include<stdio.h>

int init(int arr[], int num) {
	for (int i = 0; i < num; i++){
		arr[i] = i;
		printf("%d", arr[i]);
	}
	return 0;
}

int empty(int arr[], int num) {
	for (int i = 0; i < num; i++) {
		arr[i] = 0;
		printf("%d",arr[i]);
	}
	return 0;
}

int reverse(int arr[], int num) {
	int left = 0;
	int right = num-1;
	int temp;
	for (int i = 0; i < num; i++) {
		while (left < right){
			temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
			left++;
			right--;
		}
		printf("%d", arr[i]);
	}
	return 0;
}
int main() {
	int arr[20];
	int num = sizeof(arr) / sizeof(arr[0]);
	printf("请对数组初始化：\n");
	init(arr, num);
	printf("\n");
	printf("元素逆置：\n");
	reverse(arr, num);
	printf("\n");
	printf("清空数组:\n");
	empty(arr, num);
	printf("\n");
	system("pause");
	return 0;



}