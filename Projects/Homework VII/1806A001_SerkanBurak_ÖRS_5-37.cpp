#include <stdio.h>
#include <stdlib.h>
void tower(int n, int start, int end, int temp);
int main(){
	int n, x;
	printf("How many disks? ");
	scanf_s("%d", &n);
	printf("\n");
	tower(n, 1, 3, 2);
}
void tower(int n, int start, int end, int temp) {
	int x;
	for (x = 1; x < (1 << n); x++)
		printf("%i --> %i.\n", (x&x - 1) % 3, ((x | x - 1) + 1) % 3);
}



