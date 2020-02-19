#include <stdio.h>
#define SIZE 100  

double fibo(int);
int main(){
	int loop;
	for (loop = 0; loop < SIZE; loop++)
		printf("fibonacci( %d ) = %.1f\n", loop, fibo(loop));

	return 0;
}

double fibo(int n){
	int t;
	double fib[SIZE];

	fib[0] = 0.0;
	fib[1] = 1.0;

	for (t = 2; t <= n; t++)
		fib[t] = fib[t - 1] + fib[t - 2];

	return fib[n];
}