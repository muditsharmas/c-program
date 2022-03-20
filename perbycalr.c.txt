#include<stdio.h>

void area_peri( int , int* , int*);
void main()

{
int r , p , a;

printf("Enter the radius of the circle\n");

scanf("%d",&r);

area_peri( r,&p,&a);

printf("Area = %d  Perimeter = %d",a , p);
}

void area_peri( int r, int * p , int * a)
{

*p = 2 * 3.14 * r ;

*a = 3.14  * r *r ;

}