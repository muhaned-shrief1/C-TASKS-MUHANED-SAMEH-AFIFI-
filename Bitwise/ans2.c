#include <stdio.h>
/* set bit number*/
typedef unsigned short uint16;

int main() {
	uint16 num,bit;
	scanf("%hi",&num);
	scanf("%hi",&bit);
	num |= (1<<bit);
	printf("value after set 0x%x\n",num);
}
