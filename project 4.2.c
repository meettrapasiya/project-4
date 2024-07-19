#include <stdio.h>

main() 
{ 
    int number = 11,i,j; 
    

    for (i = 1; i <= 4; i++) 
	{
        
        for ( j = 1; j <= i; j++) 
		{
        
            printf("%d ", number);
            number++;
        }

        printf("\n");
    }

}
