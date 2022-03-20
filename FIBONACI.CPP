#include<stdio.h>
#include<conio.h>
void main()
{int i,num,n=0,b=1,c;
clrscr();
printf("SHUBHAM\n");
printf("Enter the numnber=");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
printf("\t%d",n);
c=n+b;
n=b;
b=c;
}
getch();
}