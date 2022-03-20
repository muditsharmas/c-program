#include<stdio.h>
#include<conio.h>
int factorial(int a)
{
int f;
if(a==0||a==1)
return 1;
else
f=a*factorial(a-1);
return f;
}
void main()
{int a;
clrscr();
printf("\n");
printf("Enter the number=");
scanf("%d",&a);
printf("%d!=%d",a,factorial(a));
getch();
}
