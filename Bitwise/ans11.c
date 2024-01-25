#include <stdio.h>
/* mult by 14 without * */
typedef unsigned long uint32;

int main() {
	uint32 num;
	scanf("%d",&num);
	// 14 = 1<<3 + 1<<2 + 1<<1
	num = (num<<3) + (num<<2) + (num<<1);
	printf("num * 14 = %d", num);
}
