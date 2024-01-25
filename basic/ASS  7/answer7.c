#include <stdio.h>
/*
Check if given number is perfect square

Input : 2500
Output : Yes
2500 is a perfect square.
50 * 50 = 2500

Input  : 2555
Output : No

*/
int main() {
	while(1){
		unsigned short a, flag = 0;
		scanf("%hi",&a);
		for(unsigned short i = 2 ; i*i <= a ; i++){
			if((i*i) == a){
				flag = 1;
				printf("perfect square\n");
				break;
			}
		}
		if(flag == 0){
			printf("No\n");
		}
	}
}