#include<stdio.h>
#include<stdlib.h>
int SeqSearch(int t[], int key, int n) {
	int i;
	for (i = 0; i < n && t[i] != key; i++);
	if (i < n)
		return i;
	else
		return-1;
}
int BinarySearch(int t[], int key, int n) {
	int low, high, mid;
	low = 0;
	high = n - 1;
	while (low <=high) {
		mid = (low + high) / 2;
		if (t[mid] == key)
			return mid;
		else if (t[mid] > key)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;
}
int main(void) {
	int T[] = { 1,3,4,5,6,8,9,12,13,15,18,20,38,65,78,81,86,95,96,99 };
	int x, index;
	printf("输入要查询的值：");
	scanf("%d", &x);
	index = BinarySearch(T, x, 20);
	printf("%d\n",index+1);
	system("pause");
}