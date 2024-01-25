 #include <stdio.h>
// pattern 
/*
    *
   ***
  *****
 *******
*********
***   ***
***   ***
***   ***

*/
int main()
{
    int line,char_in_line;
	for(line = 0; line < 5; line++){
		for(char_in_line = 0; char_in_line < 9 ; char_in_line++){
			if( (char_in_line < (4-line)) || (char_in_line > (4+line)) ){
				printf(" ");
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}	
	for(line = 0; line < 3; line++){
		printf("***   ***\n");
	}
}
