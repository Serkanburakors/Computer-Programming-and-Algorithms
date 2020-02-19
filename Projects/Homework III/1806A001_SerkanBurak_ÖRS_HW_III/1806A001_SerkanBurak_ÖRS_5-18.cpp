#include <stdio.h>
int evenodd(int);
int a, result;
int main(void) {
	printf("Please input an integer number\n");
	scanf_s("%d", &a);
	result = evenodd(a);
	if (result == 1)
		printf("The number is even\n");
	else
		printf("The number is odd\n");
}
int evenodd(int a) {
	result = 1;
	if (a % 2 == 0)
		result = 1;
	else
		result = 0;
	return result;
}