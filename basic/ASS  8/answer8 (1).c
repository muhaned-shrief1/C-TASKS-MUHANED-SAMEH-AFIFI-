#include <stdio.h>
/*
Write a program that reads a student grade percentage and
prints: 
"Excellent" if his grade is greater than or equal 85,
"Very Good" for 75 or greater, 
"Good" for 65 or greater, 
"Pass“ for 50 or greater,
"Fail" for less than 50. 
*/
int main() {
    unsigned short grade;
	
	while(1){	
		scanf("%hi",&grade);
		if(grade >= 85 ){
			printf("Excellent\n");
		}
		else if(grade >= 75 ){
			printf("Very Good\n");
		}
		else if(grade >= 65 ){
			printf("Good\n");
		}
		else if(grade >= 50 ){
			printf("Pass\n");
		}
		else {
			printf("fail\n");
		}
	}
}
