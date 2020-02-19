#include <stdio.h>
#define SIZE 10

int main(){
	int a[SIZE] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int i, pass, hold, change;

	printf("Numbers in original order\n");

	for (i = 0; i < SIZE; i++)
		printf("%4d", a[i]);

	printf("\n\n");

	for (pass = 1; pass < SIZE; pass++){
		change = 0;

		for (i = 0; i < SIZE - pass; i++)
			if (a[i] > a[i + 1]){
				change = 1;
				hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
			}

		printf("After Pass %d: ", pass);

		for (i = 0; i <= SIZE - pass; i++)
			printf("  %d", a[i]);
		printf("\n");

		if (!change)
			break;
	}

	printf("\nNumbers in ascending order\n");

	for (i = 0; i < 10; i++)
		printf("%4d", a[i]);

	printf("\n");

	return 0;
}
