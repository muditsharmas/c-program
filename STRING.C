#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char sent[100],temp[10];
int i,j,l;
clrscr();
printf("input a string");
gets(sent);
l=strlen(sent);
sent[l]=32;
sent[l+1]='\0';
for(i=0,j=0;sent[i]!='\0';i++)
{
if(sent[i]==32)
{
temp[j]='\0';
j=0;
while(temp[j]!='\0')
{
if(temp[j]=='t'||temp[j]=='T'&&temp[j+1]=='h'&&temp[j+2]=='e')
j=j+2;
else
printf("%c",temp[j]);
j++;
}
printf(" ");
j=0;
}
else
{
temp[j]=sent[i];
j++;
}
}
getch();
}