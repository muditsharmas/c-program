#include<stdio.h>
#include<conio.h>
void main()
{int a=34;
int *ptr=&a;
clrscr();
printf("\n");
printf("address of a=%d\n",ptr);
printf("address of a1=%d",ptr+1);
getch();
}
