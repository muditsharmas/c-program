#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{int *ptr;
clrscr();
printf("Mudit\n");
ptr=(int *)calloc(6,sizeof(int));
for(int i=0;i<6;i++)
{
printf("The value of %d element is=%d\n",i,ptr[i]);
}
getch();
}
