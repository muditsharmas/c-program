#include<stdio.h>
#include<conio.h>
void main()
{int a,b,c,greatest;
clrscr();
printf("Mudit/");
printf("\n enter three numbers\n");
scanf("\n %d%d%d",&a,&b,&c);
greatest=(a>b)?((a>c)?a:c):((b>c)?b:c);
printf("\n the greatest number is=%d",greatest);
getch();
}
