#include <stdio.h>
/* 
4 ways to swap
*/

void swap1(unsigned char *a, unsigned char *b);
void swap2(unsigned char *a, unsigned char *b);
void swap3(unsigned char *a, unsigned char *b);
void swap4(unsigned char *a, unsigned char *b);

int main() {
	unsigned char x = 9;
	unsigned char y = 12;
	printf("x = %d, y = %d\n", x,y);
	swap1(&x,&y);
	printf("x = %d, y = %d", x,y);
/*
	swap2(&x,&y);
	swap3(&x,&y);
	swap4(&x,&y);
*/
	
}


void swap1(unsigned char *a, unsigned char *b){
	unsigned char temp = *a;
	*a = *b;// 5  0b101
	*b = temp;// 3  0b011	   
}
void swap2(unsigned char *a, unsigned char *b){
	*a = *a ^ *b; //0b110
	*b = *a ^ *b; //0b101 // 5
	*a = *a ^ *b; //0b011 // 3
}
void swap3(unsigned char *a, unsigned char *b){
	*a = *a + *b; //8
	*b = *a - *b; // 5
	*a = *a - *b; // 3
	
}
void swap4(unsigned char *a, unsigned char *b){

	*a = *a * *b; //15
	*b = *a / *b; // 5
	*a = *a / *b; // 3		
}
