#include <stdio.h>
int main()
{
    int i,j;
    for(i=5;i>0;i--)
    {
        for(j=1;j<5;j++)
        {
            if(j>=i)
            {
                printf("$");
            }
            else
                printf("*");
        }
        for(j=5;j>0;j--){
            if(j<=i)
                printf("*");
            else
                printf("$");
        }
        printf("\n");
    }
    return 0 ;
}
