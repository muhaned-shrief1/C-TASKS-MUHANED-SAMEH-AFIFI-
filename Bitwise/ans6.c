#include <stdio.h>
/* swap bit 6 and 2*/
typedef unsigned long uint32;

int main() {
	uint32 num;
	scanf("%d",&num);
	
	uint32 b6Tob2 = (num>>6 & 1) << 2; 
	uint32 b2Tob6 = (num>>2 & 1) << 6;
	
	num = (num & 0xbb) | b6Tob2 | b2Tob6;
	
	printf("new value 0x%x\n",num);
}
