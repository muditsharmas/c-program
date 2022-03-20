#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{char a[20],b[20];
clrscr();
printf("SHUBHAM\n");
printf("Enter the string=");
gets(a);
printf("Enter the string=");
gets(b);
strcat(a,b);
printf("%s",a);
getch();
}