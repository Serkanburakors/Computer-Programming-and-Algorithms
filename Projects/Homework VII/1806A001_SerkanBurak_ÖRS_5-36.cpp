#include <stdio.h>
void tower(int n, int start, int end, int temp);
int main() {
	int n;
	printf("Input disc number two times: \n");
	scanf_s("%d\n", &n);
	tower(n, 1, 3, 2);
}
void tower(int n, int start, int end, int temp) {
	if (n == 1) {
		printf("%d-->%d\n", start, end); //(b)
		return;
	}
	tower(n - 1, start, temp, end); //(a)
	printf("%d-->%d\n", start, end); //(b)
	tower(n - 1, temp, end, start); //(c)
}