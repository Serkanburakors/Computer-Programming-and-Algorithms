#include <stdio.h>
int main() {
	int x = 5, a= 10, b = 8;
	int*xPtr = &x, *aPtr = &a, *bPtr = &b;
	void swapByValue(int,int);
	void swapByRef(int*,int*);
	printf("1st Application :\n");
	printf("&x: %p , xPtr: %p\n", &x, xPtr);
	printf("x: %d , xPtr: %d\n", x, xPtr);
	printf("&*xPtr: %p , *&xPtr: %p\n", &*xPtr, *&xPtr);
	*xPtr = 10;
	puts("");
	printf("2nd Application :\n");
	printf("x: %d\n", x);
	printf("*xPtr /w d: %d\n", *xPtr);
	printf("*xPtr /w p :%p\n", *xPtr);
	x = 15;
	printf("*xPtr /w d %d\n", *xPtr);
	printf("*xPtr /w p %p\n", *xPtr);
	puts("");
	printf("3rd Application :\n");
	printf("a : %d, b : %d\n", a, b);
	swapByValue(a,b);
	printf("a : %d, b : %d\n", a, b);
	swapByRef(&a,&b);
	printf("*a : %d, *b : %d\n", *aPtr, *bPtr);
}
void swapByValue(int a, int b) {
		int hold;
		hold = a;
		a = b;
		b = hold;
}
void swapByRef(int*aPtr , int*bPtr) {
	int hold;
		hold = *aPtr;
		*aPtr = *bPtr;
		*bPtr = hold;
}