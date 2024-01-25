#include <stdio.h>
/*  Function that take an array and its size, return the average of its elements */
typedef unsigned long uint32;
typedef unsigned short uint16;
typedef unsigned char uint8;
int main() {
	uint16 arr[] = {5,7,8,12,20,24,14,11,15,20};
	uint8 i = 0;
	uint8 size;
	uint16 avg = 0;
	/*
	sizeof(arr)  // size of array
	sizeof(arr[0]) // size of any element in the array
	*/
	size = sizeof(arr)/sizeof(arr[0]); // number of element
	for(char i = 0; i < size; i++){
		avg += arr[i];
	}
	printf("average = %d", avg/size);
}
