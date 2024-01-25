#include <stdio.h>
/* Function that checks if an integer is even or odd */

void chec_even_odd(unsigned short a);
int main() {
    unsigned short a;
	scanf("%hi",&a);
}

void chec_even_odd(unsigned short a){
	if( (a%2) == 0){
		printf("even number");
	}
	else{
		printf("odd number");
	}	
}