#include <stdio.h>
int main()
{
    int d1,m1,y1,d2,m2,y2,d3,m3,y3;
    scanf("%d%d%d%d%d%d",&d1,&m1,&y1,&d2,&m2,&y2);
    y3=y2-y1;
    if(m2>=m1)
    {
        m3=m2-m1;
    }
    else
    {
        m3=m1-m2;
    }
     if(d2>=d1)
    {
        d3=d2-d1;
    }
    else
    {
        d3=d1-d2;
    }
    printf("%d %d %d",d3,m3,y3);
    return 0;

}
