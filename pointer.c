#include<stdio.h>
int main()
{
    int i,j=25;
    int *pi,*pj=&j;
    *pj=j+5;
    printf("%d\n",*pj);
    i=*pj+5;
    printf("%d\n",i);
    pi=pj;
    printf("%d %d\n",pi,pj);
    *pi=i+j;
    printf("%d\n",*pi);
     printf("%d\n",pi);
      printf("%d\n",*pi+2);
       printf("%d\n",(pi+2));
        printf("%d",(++pi));
       return 0;

}
