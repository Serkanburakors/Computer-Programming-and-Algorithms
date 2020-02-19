#include <stdio.h>
#define MAX 20
int main(){
	int a[MAX] = { 0 }, x, y, z = 0, duplicate, value;
	printf("Enter 20 integers between 10 and 100:\n");
	for (x = 0; x <= MAX - 1; x++){
		duplicate = 0;
		scanf("%d", &value);
		for (y = 0; y < k; y++) {
			if (value == a[y])
			{
				duplicate = 1;
				break;
			}
		}
		if (!duplicate)
			a[z++] = value;
	}
	printf("\nThe nonduplicate values are:\n");
	for (i = 0; a[i] != 0; i++)
		printf("%d  ", a[i]);
	printf("\n");

	return 0;
}