#include <stdio.h>
/* calculate the number of consecutive zeros between two ones 
   e.g: 0b11000110100111000001  the result will be 5
*/
#define WAY 1
int main()
{
    unsigned long num = 0;
    char flag_one = 0;
    char count_zeros = 0;
    int max_zeros = 0; //store max number or zeros between two ones 
     
    num = 0b1010000011000000011000000;
    while (num != 0) // stop if num equal to zero
    {
	#if WAY == 1
        if ((num & 1) == 0)
        {
            if (flag_one == 1)
            {
                count_zeros++;
                if (count_zeros > max_zeros)
                {
                    max_zeros = count_zeros;
                }
            }
        }
        else 
        {
            flag_one = 1;
            count_zeros = 0; // new one appeared, count_zeros should reset 
        }
        num = num >> 1;
	#elif WAY == 2
        if ((num & 1) == 1)
        {
			num >>= 1;
			while(((num & 1) == 0) && (num != 0)){
				count_zeros++;
				num >>= 1;
			}
			if (count_zeros > max_zeros)
			{
				max_zeros = count_zeros;
			}
			count_zeros = 0;
        }
		else{
			num >>= 1;
		}
	#endif
		
    }  
    printf ("num of consecutive zeros = %d \n",max_zeros);
    return 0;
}