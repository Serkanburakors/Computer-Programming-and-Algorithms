#include <stdio.h>
int asterisk(int);
int side, row;
int main() {
	printf("Please enter number of rows\n");
	scanf_s("%d", &side);
	row = asterisk(side);
	while (row--) {
		printf("****\n");
	}
}
int asterisk(int side) {
	row = side;
	return row;
}