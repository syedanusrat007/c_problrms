#include <stdio.h>
int main()
{
   float b,avg,sum=0;
   int i,n=10;
   for(i=0;i<2;i++){
    scanf("%f",&b);
    sum+=b;
   }
   avg= sum/2;
   printf("%f",avg);

    return 0;
}
