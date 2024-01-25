#include <stdio.h>
/* function to get max element value from array element*/
typedef unsigned long uint32;
typedef unsigned short uint16;
typedef unsigned char uint8;

uint16 get_max(uint16 *a, uint8 size_of_array);

int main() {
	uint16 arr[] = {5,7,8,12,20,24,14,11,15,20};
	uint8 i = 0;
	uint8 size;
	uint16 max = arr[0];
	/*
	sizeof(arr)  // size of array
	sizeof(arr[0]) // size of any element in the array
	*/
	size = sizeof(arr)/sizeof(arr[0]); // number of element
	max = get_max(arr, size);
	printf("%d", max);
}

uint16 get_max(uint16 *a, uint8 size_of_array){
	uint8 i;
	uint16 max=0;
	for(i = 0; i < size_of_array; i++){
		if(max < a[i]){
			max = a[i];
		}
	}
	return max;
}