#include <stdio.h>
/* read total number of Zeros */
typedef unsigned short uint16;

int main() {
    unsigned long number, ones_count = 0;
	scanf("%d",&number);
	for(; number != 0; number >>= 1){
		ones_count += (number & 1);
	}
	printf("total num of Zeros = %d", 32 - ones_count);
}

