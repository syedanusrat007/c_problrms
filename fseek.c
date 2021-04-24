#include <stdio.h>

int main()
{
    FILE *f;
    f=fopen("new.txt","w");
    fputs("tonni",f);
    fseek(f,5,SEEK_END);
    fputs("jibon",f);
    fclose(f);
    return 0;
}
