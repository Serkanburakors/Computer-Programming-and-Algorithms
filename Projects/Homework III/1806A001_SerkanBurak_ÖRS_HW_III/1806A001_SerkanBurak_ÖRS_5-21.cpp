#include <stdio.h>
int square(int, char);
int main(void) {
	int row;
	char chr;
	printf("Enter dimension (int) & character (char) of the square: ");
	scanf_s("%d %c", &row, &chr);
	printf("\n");
	square(row, chr);
	printf("\n");
}
int square(int row, char chr) {
	int chrcounter, rowcounter;
	for (rowcounter = 1; rowcounter <= row; rowcounter++) {
		for (chrcounter = 1; chrcounter <= row; chrcounter++) {
			printf("%c", chr);
		}
		printf("\n");
	}
	return 0;
}