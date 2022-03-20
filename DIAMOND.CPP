#include<stdio.h>
#include<conio.h>
void main()
{int i,j,rows;
clrscr();
printf("Enter the rows=");
scanf("%d",&rows);
 printf("Mudit\n");
printf("Diamond star pattern\n");
for(i=0;i<=rows;i++)   {
  for(j=1;j<=rows-i;j++)  {
  printf(" ");  }
  for(j=1;j<=i*2-1;j++){
  printf("*"); }
  printf("\n"); }
  for(i=rows-1;i>0;i--)  {
    for(j=1;j<=rows-i;j++)  {
    printf(" ");  }
    for(j=1;j<=i*2-1;j++)   {
    printf("*"); }
    printf("\n"); }
    getch();}
