#include <stdio.h>
/* set last 2 bits number*/
typedef unsigned char uint8;

int main() {
	uint8 num;
	scanf("%hi",&num);
	num |= (1<<6) |(1<<7);
	printf("value after set 0x%x\n",num);
}
