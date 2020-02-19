#include <stdio.h>
int power(int, int);
int a, b, result;
int main() {
	printf("Please enter a integer.\n");
	scanf_s("%d", &a);
	printf("Please enter a exponential value.\n");
	scanf_s("%d", &b);
	result = power(a, b);
	printf("\nResult = %d\n", power(a, b));
	return 0;
}
int power(int a, int b) {
	int result = 1;
	while (b--) {
		result *= a;
	}
	return result;
}