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
	printf("��������ʼ����\n");
	init(arr, num);
	printf("\n");
	printf("Ԫ�����ã�\n");
	reverse(arr, num);
	printf("\n");
	printf("�������:\n");
	empty(arr, num);
	printf("\n");
	system("pause");
	return 0;



}