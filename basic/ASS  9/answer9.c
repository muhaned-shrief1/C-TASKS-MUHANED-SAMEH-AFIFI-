#include <stdio.h>
/* prime number*/
int main() {
    unsigned short a;
	unsigned char i;
	
	while(a <= 100){
		for(i = 2 ;i <= a/2 ;i++){
			if(a%i == 0){
				printf("not prime");
				break;
			}
		}
		if(i == ((a/2)+1)){
			printf("prime");
		}
		a++;
	}
}
