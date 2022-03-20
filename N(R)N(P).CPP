#include<stdio.h>
#include<conio.h>
void fun();
void main()
{clrscr();
printf("SHUBHAM\n");
fun();
getch();
}
void fun()
{int a,b,c;
printf("enter the value of a and b=");
scanf("%d %d",&a,&b);
c=a+b;
printf("the sum is=%d",c);
}