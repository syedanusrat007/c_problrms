#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c)
    {
        printf("a\n");
    }
    if(a<=b && b>=c)
    {
        printf("b\n");
    }
    if(c>=b && a<=c)
    {
        printf("c\n");
    }
    if(a<=b && a<=c)
    {
        printf("a\n");
    }
    if(a>=b && b<=c)
    {
        printf("b\n");
    }
    if(c<=b && a>=c)
    {
        printf("c\n");
    }
    return 0;
}
