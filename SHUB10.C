#include<stdio.h>
#include<conio.h>
void main()
{int a;
clrscr();
printf("Mudit");
printf("\n enter value of a");
scanf("%d",&a);
if(a%2==0)
goto even;
else
goto odd;
even:
{
printf("\n number is even");
}
return;
odd:
{
printf("\n number is odd");
}
getch();
}
