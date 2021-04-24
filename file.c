#include <stdio.h>
int main()
{
    FILE *fp1,*fp2;
    char c= 'tonni';
    fp1=fopen("new.txt","w");
    fprintf(fp1,"%c",c);
    fclose(fp1);
    fp2=fopen("new1.txt","r");
    fscanf(fp2,"%c",&c);
    printf("%c",c);
    fclose(fp2);

    return 0;
}
