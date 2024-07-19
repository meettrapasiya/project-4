#include <stdio.h>

int main() 
{
    int i,j,spaces;

    for (int i = 1; i <= 5; i++)
	{
    
        for (int j = 1; j <= 4; j++)
		 {
            printf("   "); 
        }

    
        for (int j = i; j >= 1; j--) 
		{
            printf("%d ", j);
        }

    
        for (int j = 2; j <= i; j++) 
	    {
            printf("%d ", j);
        }

        
        spaces--;
        
        printf("\n");
    }

}
