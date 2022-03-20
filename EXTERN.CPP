#include<stdio.h>
#include<conio.h>
int x=12;
void main()
{extern int y;
clrscr();
printf("\n");
printf("x=%d \ny=%d",x,y);
getch();
}
int y=13;
