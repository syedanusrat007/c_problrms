#include <stdio.h>
#include <string.h>
int main()
{
    char str[50],str2[50]={'a','e','i','o','u','A','E','I','O','U'};
    int i,j;
    gets(str);
    j=strlen(str);
    for(i=0;str[i]!=NULL;i++)

    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            printf("V");
        }
        else if(str[i]>='a'&& str[i]<='z' ||str[i]>='A'&& str[i]<='Z')
        {

                printf("consonant\n");

            }


    }
    for(i=0;i<j;i++)
    {
        if(str[i]==' ')
            j--;
    }
    printf("%d",j);
    return 0;
}
