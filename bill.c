#include <stdio.h>
int main()
{
    double total ,unit;
    scanf("%lf",&unit);
    if(unit<=200)
    {
        total=unit*.5;
        printf("%lf",total);
    }
    else if (200<unit && unit<=400)
    {
        total=100+(unit-200)*.65+200*.5;
        printf("%lf",total);
    }
    return 0;
}

