#include<stdio.h>
#include<conio.h>
void main()
{
int line,row,col,value=0;
clrscr();
printf("Mudit");
printf("\n enter the number of lines=");
scanf("%d",&line);
for(row=1;row<=line;row++)
{
for(col=1;col<=row;col++)
{
value++;
printf("%d",value);
}
printf("\n");
}
getch();
}
