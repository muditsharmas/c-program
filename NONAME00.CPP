#include<stdio.h>
#include<conio.h>
void main()
{int sales;
float salary1,salary2;
clrscr();
printf("SHUBHAM");
printf("\n enter total sales:");
scanf("%d",&sales);
if(sales>=10000)
salary1=3000+(0.2*3000)+(0.1*3000)+500+(sales*0.1)+500;
{
printf("\n your salary is=%f",salary1);
}
if(sales<10000)
salary2=3000+(0.2*3000)+(0.1*3000)+500+(sales*0.05)+200;
{
printf("\n your salary is=%f",salary2);
}
getch();
}