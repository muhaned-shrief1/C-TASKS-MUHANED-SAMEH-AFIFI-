#include <stdio.h>
/* revese number 0x12345678 to 0x78563412 */
unsigned long reverse_hex_number(unsigned int );

int main() {
    unsigned long number;
	scanf("%x",&number);
	number = reverse_hex_number(number);
	printf("0x%x\n",number);			
}
unsigned long reverse_hex_number(unsigned int new_num){
	unsigned long number;
	number = (((new_num>>24) & 0xff)<< 0 )|
			 (((new_num>>16) & 0xff)<< 8 )|
			 (((new_num>>8)  & 0xff)<< 16)|
			 (((new_num>>0)  & 0xff)<< 24);
	return number;	 
}

