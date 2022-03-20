#include<stdio.h>
#include<conio.h>
void main()
{int chem,C,ICIT,TC,WT,g,f;
clrscr();
printf("\n SHUBHAM");
printf("\n enter the value of chem");
scanf("%d",&chem);
printf("enter the value of C");
scanf("%d",&C);
printf("enter the value of ICIT");
scanf("%d",&ICIT);
printf("enter the value of TC");
scanf("%d",&TC);
printf("enter the value of WT");
scanf("%d",&WT);
g=chem+C+ICIT+TC+WT;
printf("\n sum=%d",g);
f=(g/5);
printf("\n percentage=%d",f);
getch();
}