#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char sent[100];
int length,choice;
clrscr();
printf("1. get an input string:\n");
printf("2. total character:\n");
printf("3. upper case\n");
printf("4.lower case\n");
printf("5. quit\n");
printf("input choice\n");
scanf("%d",&choice);
switch(choice)
{
case1:
printf("input a sentence");
gets(sent);
break;
case2:
length=strlen(sent);
printf("%d",length);
break;
case3:
printf("%s",strupr(sent));
break;
case4:
printf("%s",strlwr(sent));
case5:
exit(0);
default:
printf("invalid choice");
break;
}
getch();
}