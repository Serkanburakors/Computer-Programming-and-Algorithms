#include <stdio.h>
const int size = 5;
void sorting(int a[], int size);
int main() {
	int a[size] = { 5,1,6,8,3 }, i, j;
	printf("Before sorting: ");
	for (i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
	puts("\n");
	sorting(a, size);
	printf("After sorting: ");
	for (i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
	puts("\n");
}
void sorting(int a[size], int size) {
	int i, j, hold;
	for (i = 0; i < size - 1; i++) {
		for (j = 0; j < size - 1; j++) {
			if (a[j] > a[j + 1]) {
				hold = a[j];
				a[j] = a[j + 1];
				a[j + 1] = hold;
			}
		}
	}
}