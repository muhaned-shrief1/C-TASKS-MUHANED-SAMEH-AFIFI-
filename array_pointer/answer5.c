#include <stdio.h>
/* function to get min element value from array element*/
typedef unsigned long uint32;
typedef unsigned short uint16;
typedef unsigned char uint8;

uint16 get_min(uint16 *a, uint8 size_of_array);

int main() {
	uint16 arr[] = {15,7,8,12,20,24,14,11,15,20};
	uint8 i = 0;
	uint8 size;
	/*
	sizeof(arr)  // size of array
	sizeof(arr[0]) // size of any element in the array
	*/
	size = sizeof(arr)/sizeof(arr[0]); // number of element
	uint16 min = get_min(arr, size);
	printf("%d", min);
}

uint16 get_min(uint16 *a, uint8 size_of_array){
	uint8 i;
	uint16 min= a[0];
	for(i = 0; i < size_of_array; i++){
		if(min > a[i]){
			min = a[i];
		}
	}
	return min;
}