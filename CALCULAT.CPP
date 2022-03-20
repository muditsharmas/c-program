#include<stdio.h>
#include<conio.h>
void main()
{int a,b,c,ch;
clrscr();
printf("Mudit");
printf("\n enter value of a");
scanf("%d",&a);
printf("enter value of b");
scanf("%d",&b);
printf("Arithematic functions");
printf("\n 1.add");
printf("\n 2.sub");
printf("\n 3.mul");
printf("\n 4.div");
printf("\n 5.modulas");
printf("\n enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:c=a+b;
printf("%d",c);
break;
case 2:c=a-b;
printf("%d",c);
break;
case 3:c=a*b;
printf("%d",c);
break;
case 4:c=a/b;
printf("%d",c);
break;
case 5:c=a%b;
printf("%d",c);
break;
default:
printf("wrong input");
}
getch();
}
