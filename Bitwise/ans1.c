#include <stdio.h>
/* read bit number*/
typedef unsigned short uint16;

int main() {
	uint16 num,bit;
	scanf("%hi",&num);
	scanf("%hi",&bit);
	printf("value after set 0x%x\n",num>>bit &1);
}
