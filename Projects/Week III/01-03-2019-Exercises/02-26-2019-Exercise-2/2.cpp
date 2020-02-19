#include <stdio.h>
int main (){
	int numberOfStudents, grade;
	int counter = 0;
	int numberOfPasses = 0;
	int numberOfFails = 0;
	printf("Please enter number of students.\n");
	scanf("%d",&numberOfStudents);
	while(counter<numberOfStudents){
		printf("Please enter your grade.\n");
		scanf("%d",&grade);
		if(grade>=60){
			printf("Passed\n");
			numberOfPasses=numberOfPasses++;
			
		}
		else{
			printf("Failed\n");
			numberOfFails=numberOfFails++;
			
		}
		counter=counter+1;
		
	}
	printf("Passed: %d, Fails: %d",numberOfPasses,numberOfFails);
	return 0;
	getchar();
}