#include <stdio.h>
// 2 3 5 7 11 13 17  
int main()
{
	long num_from_user; 
	while(1)
	{	
		scanf("%ld",&num_from_user);
		char flag = 0;
		if((num_from_user % 2 == 0) &&  (num_from_user!= 2)) { // even
			printf("not prime");
		}else{
			for(i = 2; i < num_from_user/2; i++){
				if(num_from_user % i  == 0 ){
					printf("not prime");
					flag = 1;
					break;
				}	
			}
			if(0 == flag){
				printf("prime");
			}	
		}		
	}
}

