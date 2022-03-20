#include<stdio.h>
int main()
{
   int km,m,f,ih,cm;
   printf("Enter Distance Between Two Cities In Kilometer: ");
   scanf("%d",&km);
   m=km*1000;
   f=km*3281;
   ih=km*39370;
   cm=km*100000;
   printf("\nDistance In Metre: %d",m);
   printf ("\nDistance In Feet: %d",f);
   printf("\nDistance In Inches: %d",ih);
   printf("\nDistance In Centimetre: %d",cm);
}
