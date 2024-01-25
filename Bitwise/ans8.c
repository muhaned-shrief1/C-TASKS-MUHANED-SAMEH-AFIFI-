#include <stdio.h>
/* revese number 00101011 => 11010100 */
unsigned char reverse_bits(unsigned char );

int main() {
    unsigned char number;
	scanf("%x",&number);
	number = reverse_bits(number);
	printf("0x%x\n",number);			
}
unsigned char reverse_bits(unsigned char new_num){
	unsigned char number;
	for(char i = 0; i < 8; i++)
		number |= (((new_num>> (7-i)) & 1)<< i);			 
	return number;	 
}

