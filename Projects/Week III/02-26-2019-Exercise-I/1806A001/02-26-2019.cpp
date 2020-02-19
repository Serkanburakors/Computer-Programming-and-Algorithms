#include <stdio.h>
int main (){
	int grade;
	printf("Please enter yout grade.\n");
	scanf("%d",&grade);
	if(grade>=60)
		printf("Passed");
	else
		printf("Failed\n");
	return 0;
	getchar();
}