#include <stdio.h>
/*  Function that take an array and its size, 
then sorting the element descending*/
void sort(unsigned char size, unsigned long a[5]);
int main() {
	unsigned long a[]={1,9,5,7,6,4,8,5,2,5,9};
	unsigned char size = sizeof(a)/sizeof(a[0]);
	sort(size, a);
	
	for(char i = 0; i < size; i++){
		printf("%d ",a[i]); 
	}
}
void sort(unsigned char size, unsigned long a[5]){
	unsigned char i, j ; 
	for(i = 0; i < size; i++){
		for(j = i+1; j < size; j++){
			if(a[i] < a[j]){
				unsigned long temp = a[i];
				a[i] = a[j]; 
				a[j] = temp;
			}
		}		
	}
}