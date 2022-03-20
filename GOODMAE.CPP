#include<stdio.h>
#include<conio.h>
void main()
{
int time;
clrscr();
printf("SHUBAHM");
printf("\n enter the time=");
scanf("%d",&time);
if(time<12)
{
printf("good morning");

}
else if(12<=time<17)
{
printf("good afternoon");
}
getch();
}