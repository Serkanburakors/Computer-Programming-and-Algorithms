#include <stdio.h> 
#include <math.h>
double hypotenuse(double, double);
double a, b, hypo;
int main(void) {
	printf("Please input first length.\n");
	scanf_s("%lf", &a);
	printf("Please input second length.\n");
	scanf_s("%lf", &b);
	hypo = hypotenuse(a, b);
	printf("Hypotenuse is %lf\n", hypo);
}
double hypotenuse(double a, double b) {
	hypo = sqrt((a * a) + (b * b));
	return hypo;
}