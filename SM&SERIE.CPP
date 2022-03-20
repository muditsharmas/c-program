#include<stdio.h>
#include<conio.h>
void main()
{int num=1,sum;
clrscr();
while(num<=10)
{
printf("value of num=%d\n",num);
num++;
sum+=num;
}
printf("sum=%d",sum);
getch();
}