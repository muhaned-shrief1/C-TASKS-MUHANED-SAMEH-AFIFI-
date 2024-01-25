#include <stdio.h>
/*
print if this is a power of 2 or not.

Input : n = 4
Output : Yes
2^2 = 4

Input : n = 7
Output : No

*/
int main() {
    unsigned short a, flag = 0;
	scanf("%hi",&a);
	for(;(a != 1) ; a /= 2 ){
		if(a%2 != 0){
			printf("no\n");
			flag = 1;
			break;
		}			
	}
	if(flag == 0){
		printf("power of 2");
	}
}
