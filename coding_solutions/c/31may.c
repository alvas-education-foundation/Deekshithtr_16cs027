//decimal to binary


#include <stdio.h>
int main()
{
    int dec,count=0,i;
    int bin[10];
    scanf("%d",&dec);
    while(dec>=1)
    {
        bin[count++]=dec%2;
        dec=dec/2;
    }
    for(i=count-1;i>=0;i--)
    {
    printf("%d",bin[i]);
    }
        return 0;
    }
