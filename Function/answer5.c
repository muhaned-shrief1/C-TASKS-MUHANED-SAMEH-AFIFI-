#include <stdio.h>
/*  Write a C Function that return the addition or subtraction 
or multiplication or division for two numbers. The function should 
take the required operation and two numbers as arguments. It also 
should check that the input operation is one of those operation that
 mentioned before and if not it should return error. The function 
 should be implemented using switch case. 
*/
unsigned short calculator(unsigned short,unsigned short,unsigned char);
int main() {
    float a,b;
	unsigned char op;
	scanf("%f",&a);
	scanf(" %c",&op);
	scanf("%f",&b);
	unsigned short result = calculator(a,b,op);
	printf("result = %d", result);
}

unsigned short calculator(unsigned short a,unsigned short b,unsigned char c){
	switch(c){
		case '+': return a+b; break;
		case '-': return a-b; break; 
		case '/': return a/b; break;
		case '*': return a*b; break;
		default: printf("wrong entry");		
	}
	return 0;
}