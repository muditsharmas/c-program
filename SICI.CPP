#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{int t;
float SI,CI,p,r,x;
clrscr();
printf("SHUBHAM");
printf("\n enter value of time=");
scanf("%d",&t);
printf("\n enter value of principle");
scanf("%f",&p);
printf("\n enter value of rate");
scanf("%f",&r);
SI=(p*r*t)/100;
x=(1+r)/100;
CI=p*pow(x,t);
printf("\n simple interest=%f",SI);
printf("\n compound interest=%f",CI);
getch();
}