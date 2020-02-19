//Global-Local-Static
#include <stdio.h>
int x = 1;
void useLocal(void);
void useGlobal(void);
void useStaticLocal(void);
void main(){
	int x = 100;
	printf("%d\n",x);
	useLocal();
	useGlobal();
	useStaticLocal();
	useLocal();
	useGlobal();
	useStaticLocal();
	printf("%d\n",x);
}
void useLocal(void){
	int x = 10;
	printf("%d\n",x);
	x++;
	printf("%d\n",x);
}
void useGlobal(void){
	printf("%d\n",x);
	x++;
	printf("%d\n",x);
}
void useStaticLocal(void){
	static int x= 50;
	printf("%d\n",x);
	x++;
	printf("%d\n",x);

}
//Recursive Structure-Example I:Factorial
#include <stdio.h>
unsigned long long int factorial(unsigned);
int main(){
	int i;
	for(i=1;i<=10;i++){
		printf("%u!=%llu\n",i,factorial(i));
	}
}
unsigned long long int factorial(unsigned x){
	if(x<=1){
		return 1;
	}
	else{
		return x*factorial(x-1);
	}
}
//Recursive Structure-Example II:Fibonacci Series
#include <stdio.h>
unsigned fibo(unsigned);
int main(){
	unsigned int i;
	int nth;
	printf("Input nth value which wanted to see until nth value:\n");
	scanf("%d",&nth);
	for(i=1;i<=nth;i++)
		printf("%uth value of Fibonacci series is %u\n",i,fibo(i));
}
unsigned fibo(unsigned nth){
	if(nth<=2)
		return 1;
	else
		return fibo(nth-1)+fibo(nth-2);
}