#include <stdio.h>
/*
Write a program that take two integers from 
the user and print the results of this 
equation: Result = ((num1 + num2) * 3) /2– 10. 

*/
int main(){
	unsigned short num2, num1;
	printf("please enter first number\n");
	scanf("%hi",&num1);
	printf("please enter first number\n");
	scanf("%hi",&num2);

	printf("((%d + %d) * 3) / 2 - 10 = %f", num2,num1,(((num1 + num2) * 3) / 2.0) - 10);
	
}