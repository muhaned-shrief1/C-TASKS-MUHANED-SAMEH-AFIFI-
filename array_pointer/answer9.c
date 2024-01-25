#include <stdio.h>
/*
Function that take an array and its size,
 then reverse all the element of the array
*/
typedef unsigned short uint16;
typedef unsigned char uint8;
typedef unsigned int uint32;
void reverse_element(uint32*,uint8 size);
int main() {
	uint32 arr[] = {1,2,5,2,8,5,9,12,6,55,4,31};
	uint8 size = sizeof(arr)/sizeof(arr[0]);
	for(uint8 i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	reverse_element(arr,size);
	for(uint8 i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	
}
void reverse_element(uint32*x,uint8 size){
	
	for(uint8 i = 0; i < size/2; i++){
		uint32 temp = x[i];
		x[i] = x[size - i - 1];
		x[size - i - 1] = temp; 
		
	}
}
