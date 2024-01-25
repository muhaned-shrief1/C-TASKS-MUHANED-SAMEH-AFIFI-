#include <stdio.h>
/* factorial using loops*/
int main() {
    unsigned short a, fact = 1;
	unsigned char i;
	
	while(1){
		scanf("%hi",&a);
		for(fact = 1, i = 1 ; i <= a ; i++){
			fact = fact * i;
		}
		printf("factorial of %d = %d\n",a,fact);
	}
}
