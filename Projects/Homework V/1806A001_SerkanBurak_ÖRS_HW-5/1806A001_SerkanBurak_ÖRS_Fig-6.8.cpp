#include <stdio.h>
int main(void){
	int a[50] = { 2,5,7,6,7,3,9,2,1,7,0,6,8,4,1,5,7,9,7,5,3,9,2,7,0,2,5,2,8,4,6,3,5,8,9,5,3,6,2,8,5,9,5,3,2,6,7,8,9,0 }; // sonuc kumesý
	int x[10] = { 0 }; // sayinin tekrar etme kumesi
	int b; // ilk for icin sayac
	int i;
	for (b = 1; b <= 50; b++){
		for (i = 0; i <= 9; i++){
			if (a[b] == i){
				x[i] = x[i] + 1;
			}
		}
	}
	int counter;
	printf("VALUE\tFREQUENCY\n");
	for (counter = 0; counter <= 9; counter++){
		printf("%d\t", counter);
		int h = 1;
		while (h <= x[counter]){
			printf("*");
			h++;
		}
		printf("\n");
	}
} 
