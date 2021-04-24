#include <stdio.h>
int main()
{
    int i ,sum=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2){
        sum+=i;
        if(i<n)
        {
            printf("%d+",i);
        }
        else {
            printf("%d=",i);
        }
    }
    printf("%d",sum);
    return 0;
}
