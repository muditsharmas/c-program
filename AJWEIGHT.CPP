#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{int age,count=0,x=1;
float weight;
clrscr();
printf("SHUBHAM\n");
printf("enter the age \n");
printf("and weight of 5 students=\n");
do {
   scanf("%d",&age);
   scanf("%f",&weight);
   if(age<25 && weight<50)
   {  count++; }
   x++;
   }
   while(x<=5);
   printf("Number of students of <25 age");
   printf("and <50 weight=%d",count);
   getch();}