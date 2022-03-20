#include<stdio.h>
#include<conio.h>
void main()
{int num,r;
clrscr();
printf("SHUBHAM\n");
printf("Enter the value of the number=");
scanf("%d",&num);
r=num%10;
if(r==5)
{
num=num/10;
printf("the square is=%d%d",num*num++,r*r);
}
getch();
}