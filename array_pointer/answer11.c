#include <stdio.h>
/*
Function that take an array and its size, and return 
the most occurrence element in the array 
e.g: x[] = {1,2,3,8,6,5,3,9,3,4,3,7,2}  the OUTPUT will be 3

*/
typedef unsigned short uint16;
typedef unsigned char uint8;
typedef unsigned int uint32;
uint8 most_repeated_number( uint8*, uint8 );

void main(){
	
	uint8 arr[] = {3,6,2,3,2,6,6,7,7,6,8};
	uint8 num_of_elements_inarr = sizeof(arr) / sizeof(arr[0]);
	
	uint8 most_repeated_num  = most_repeated_number(arr, num_of_elements_inarr);
	printf("%d", most_repeated_num);
}

uint8 most_repeated_number( uint8 *arr, uint8 num_of_elements_inarr){

	uint8 most_repeated_num = 0, counter = 0, max = 0;
	
	for(uint32 i = 0; i < num_of_elements_inarr; i++){
		
		for(uint32 j = i+1; j < num_of_elements_inarr; j++){
			
			if(arr[i] == arr[j]){
				counter++;
			}
		}
		if(max < counter){
			max = counter;
			most_repeated_num = arr[i];
			counter = 0;
		}
		
	}
	return most_repeated_num;
	
}
