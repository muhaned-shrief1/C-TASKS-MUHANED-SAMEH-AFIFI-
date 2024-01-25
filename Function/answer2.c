#include <stdio.h>
/* reads two integers and checks 
if the first is multiple of the second. 
10 and 5 : 10 is multiple of 5
15 and 3 : 15 is multiple of 3 
*/
typedef unsigned char uint8;
typedef unsigned short uint16;

uint8 check_mult(uint8,uint8);

int main() {
	
	uint16 a, b;
	scanf("%hi",&a);
	scanf("%hi",&b);
	if(check_mult(a,b) == 1){
		printf("first num is multiple of the second num\n");
	}
	else{
		printf("No");
	}
}

uint8 check_mult(uint8 a,uint8 b){
	return (a%b == 0);
}

