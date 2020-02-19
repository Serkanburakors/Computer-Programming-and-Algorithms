#include <stdio.h>
int main (){
	int numberOfStudents, grade,b,c,d,e,f,g,h,i,j,k;
	int counter = 0;
	int numberOfPasses = 0;
    int numberOfFails = 0;
	int sumofa = 0;
	int a=0;
	printf("Please enter number of students.\n");
	scanf("%d",&numberOfStudents);
	while(counter<=numberOfStudents){
		printf("Please enter your grade.\n");
		scanf("%d",&grade);
		if(90<=grade<=100){
			printf("A\n");
			a=counter++;
			sumofa = sumofa + grade;
		}
		else if(80<=grade<90){
			printf("A+\n");
			b=counter++;
		}
		else if(70<=grade<80){
			printf("A\n");
			c=counter++;
		}
		else if(60<=grade<70){
			printf("B+\n");
			d=counter++;
		}
		else if(50<=grade<60){
			printf("B\n");
			e=counter++;
		}
		else if(40<=grade<50){
			printf("C+\n");
			f=counter++;
		}
		else if(30<=grade<40){
			printf("C\n");
			g=counter++;
		}
		else if(20<=grade<30){
			printf("D+\n");
			h=counter++;
		}
		else if(10<=grade<20){
			printf("D\n");
			i=counter++;
		}
		else if(0<=grade<10){
			printf("F+\n");
			j=counter++;
		}
		else{
			printf("F\n");
			k=counter++;
		}
		counter=counter+1;
	}
	printf("%d\n", a);
	printf("%d\n",sumofa/a);//average

	return 0;

	getchar();
}