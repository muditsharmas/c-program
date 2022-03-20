#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{int *ptr;
clrscr();
printf("\n");
ptr=(int *)malloc(6 *sizeof(int));
for(int i=0;i<6;i++)
{ printf("Enter the value of %d element:",i);
  scanf("%d",&ptr[i]);
}
for(i=0;i<6;i++)
{
printf("The value of %d elements is =%d\n",i,ptr[i]);
}
getch();
}
