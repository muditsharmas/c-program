#include<stdio.h>

int main()
{
    int X[3][2], i,j,row,col;
    printf("\nenter the elements of array ");
    for(i=0;i<3;i++)
    for(j=0;j<2;j++)
    scanf("%d",&X[i][j]);
    printf("main matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        printf("%d",X[i][j]);
        printf("\n");
    }

    printf("the transpose matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        printf("%d",X[i][j]);
        printf("\n");
    }
return 0;
}