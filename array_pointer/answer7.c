#include <stdio.h>
/*  C Function that take an array, an int and its size, 
return 0 if this integer is not found and the index 
of the int in the array if it is found*/
typedef unsigned short uint16;
typedef unsigned char uint8;
typedef unsigned int uint32;
uint8 search_element(uint32*,uint8 size,uint32 element);
int main() {
	uint32 arr[] = {1,2,5,2,8,5,9,12,6,55,4,31};
	uint32 element;  // will store the element that you search for
	uint8 size = sizeof(arr)/sizeof(arr[0]);
	printf("please enter the element value: ");
	scanf("%d",&element);
	uint8 find = search_element(arr,size,element);
	if(find == 0){
		printf("not found");
	}
	else{
		printf("found");
	}
}
uint8 search_element(uint32*x,uint8 size,uint32 element){
	for(uint8 i = 0; i < size; i++){
		if(element  == x[i]) return 1;
	}
	return 0;
}