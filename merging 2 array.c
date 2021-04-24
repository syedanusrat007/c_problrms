#include <stdio.h>
int main()
{
    int a[50],b[50],c[50];
    int m,n,i,j,k;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
 scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    i=0,j=0,k=0;
    while(i<m&& j<n){
        if(a[i]<=b[j]){
            c[k]=a[i];
        k++;
        i++;
        }
        else{
            c[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<m){

            c[k]=a[i];
        k++;
        i++;
    }
    while(j<n)
        {
            c[k]=b[j];
        k++;
        j++;
        }

    for(i=0;i<m+n;i++)
    {
        printf("%d",c[i]);
    }


    return 0;

}
