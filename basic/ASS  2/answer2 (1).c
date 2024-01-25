#include <stdio.h>
/* compare 2 input from user*/
int main() {
    unsigned short a, b;
	scanf("%hi%hi",&a,&b);
	
	if( a > b){
		printf("a > b");
	}
	else if( a < b){
		printf("a < b");		
	}
	else{
		printf("a = b");		
	}
}
