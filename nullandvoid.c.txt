#include<stdio.h>

int main()
{
    int a;
    int b;
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if((a>b)&&(b>c) || (a<b)&&(b<c))
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}