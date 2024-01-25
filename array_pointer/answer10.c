#include<stdio.h>

typedef unsigned char uint8;
typedef unsigned long uint32;
#define SIZE 10 
uint8 *remove_repeated(uint8*,uint8, uint8 *sz_new);
int main()
{
	uint8 x[] = {1, 1, 1, 5, 5, 5, 3, 3, 5, 5};
	uint8 *y, i, s_new = 0;
	uint8 size = sizeof(x)/sizeof(x[0]);
	
	y = remove_repeated(x, size, &s_new);
	for(i = 0;  i < s_new; i++){
		printf("%d ", y[i]);
	}
	free(y);
}
/*Function that take an array, its size and int* 
size of the new array, then remove the repeated
 value and return an array with no repeated values
*/
uint8 *remove_repeated(uint8 *arr,uint8 size, uint8 *ps_new){
	uint8 *new_arr = malloc(size);
	
//	static uint8 new_arr[size] = {0};
	uint8 i,j,flag;
	for(i = 0 ; i< SIZE; i++){
		flag = 0;
		for(j = 0; j <= (*ps_new); j++){
			if(arr[i] == new_arr[j]){
				flag = 1;
				break;
			}
		}
		if(flag == 0){
			new_arr[*ps_new] = arr[i];
			(*ps_new)++;
		}
	}
	return new_arr;
}
