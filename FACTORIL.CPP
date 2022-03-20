#include<stdio.h>
#include<conio.h>
void main()
{int num,i=1;
clrscr();
printf("Mudit\n");
printf("enter the number=");
scanf("%d",&num);
while(num>1)
{
i=i*num;
num--;
printf("%d\n",i);
}
getch();
}
