#include<stdio.h>

main() 
{
    int i,j;;  

    for (i = 1; i <=5; i++) 
	{

        for (j = 1; j <= i + 1; j++) 
		{
            printf("%d ", j);
        }

        for (j = 0; j < 2 * (j - i - 1); j++)
		 {
            printf("  ");
        }

        for (j=1; j>=5; j--) 
		{
            printf("%d ", j);
        }

        printf("\n");
    }

}
