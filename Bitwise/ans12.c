#include <stdio.h>
/* check odd even*/
typedef unsigned long uint32;

int main() {
	uint32 num;
	scanf("%d",&num);
	
	if(num&1 == 1){
		printf("odd");
	}
	else{
		printf("even");
	}
}
