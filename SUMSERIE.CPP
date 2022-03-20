#include<stdio.h>
#include<conio.h>
void main()
{int a=0,b=1,i,sum=0,num;
clrscr();
printf("SHUBHAM");
printf("\n enter the number");
scanf("%d",&num);
printf("%d",a);
printf("%d",b);
for(i=2;i<=num;i++)
{
sum=a+b;
printf("%d",sum);
a=b;
b=sum;
}
getch();
}