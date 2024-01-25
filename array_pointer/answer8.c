#include <stdio.h>
/*  C Function that find 2nd largest element*/
typedef unsigned short uint16;
typedef unsigned char uint8;
typedef unsigned int uint32;
uint32 second_max_element(uint32*,uint8 size);
int main() {
	uint32 arr[] = {1,2,5,2,8,5,9,12,6,55,4,31, 34, 56};
	uint8 size = sizeof(arr)/sizeof(arr[0]);
	printf("2nd max element = %d", second_max_element(arr,size));
}
uint32 second_max_element(uint32*x,uint8 size){
	uint32 max_1=0;  // will store the max element
	uint32 max_2=0;  // will store the 2nd max element
	for(uint8 i = 0; i < size; i++){
		if(x[i]>max_1)	{
			max_2 = max_1;
			max_1 = x[i];
		}
		else if(x[i]>max_2 && x[i] < max_1)	{
			max_2 = x[i];
		}
	}
	return max_2;
}
