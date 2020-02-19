#include <stdio.h>
int multiple(int, int);
int a, b, bin = 1;
int main() {
	printf("Please input a first number.\n");
	scanf_s("%d", &a);
	printf("Please input a second number.\n");
	scanf_s("%d", &b);
	bin = multiple(a, b);
	if (bin == 1) {
		printf("First number is not multiple of second number.\n");
	}
	else {
		printf("First number is multiple of second number.\n");
	}
	return 0;
}
int multiple(int a, int b) {
	if (0 <= a / b < 1) {
		bin = 1;
	}
	else {
		bin = 0;
	}
	return bin;
}
