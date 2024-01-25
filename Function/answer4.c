#include <stdio.h>
/* Function that checks if an integer is prime or not.
 */
void check_prime (unsigned short );
int main() {
    unsigned short a;
	while(1){
		scanf("%hi",&a);
		check_prime(a);
	}
}
void check_prime (unsigned short a){
	unsigned char flag = 0;
	for(unsigned char i = 2 ;i <= a/2 ;i++){
		if(a%i == 0){
			printf("not prime\n");
			flag = 1;
			break;
		}
	}
	if(0 == flag){
		printf("prime\n");
	}
}
