#include<stdio.h>
#include<conio.h>
void main()
{int arr[100];
int i,mx,mn,n;
clrscr();
printf("SHUBHAM\n");
printf("enter the numbers to store in array=");
scanf("%d",&n);
printf("enter %d elements in the array:\n",n);
for(i=0;i<n;i++)
{ printf("element -");
  scanf("%d",&arr[i]); }
mx=arr[0];
mn=arr[0];
for(i=1;i<n;i++)
{  if(arr[i]>mx)
 { mx=arr[i]; }
  if(arr[i]<mn)
 { mn=arr[i]; }  }
printf("Maximum element is=%d\n",mx);
printf("Minimum element is=%d\n",mn);
getch();  }