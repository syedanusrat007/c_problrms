#include <stdio.h>
int main()
{
    FILE *fp,*fp1;
    char str[50];
    fp1=fopen("read1.txt","w");
    gets(str);
    fprintf(fp1,"%s",str);

    fp=fopen("read.txt","r");

    fscanf(fp,"%s",str);

    fclose(fp);
    fclose(fp1);
    return 0;
}
