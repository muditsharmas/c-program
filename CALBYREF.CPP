#include<stdio.h>
#include<conio.h>
void main()
{clrscr();
printf("SHUBHAM\n");
int x,y;
int swap(int *,int *);
printf("enter the value of x and y=\n");
scanf("%d %d",&x,&y);
swap(&x,&y);
printf("\n x=%d y=%d",x,y);
getch();
}
 int swap(int *a,int *b)
 {int k;
 k=*a;
 *a=*b;
 *b=k;
 printf("\n a=%d b=%d",*a,*b);
 return (k);
 }