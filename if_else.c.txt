#include<stdio.h>
#include<conio.h>
int main()
{
    int Age;
    printf("Aatif\n");
    printf("Enter your age:");
    scanf("%d", &Age);
    if (Age >= 18)
    {
        printf("you are eligible a voter");
        return 0;
    }
    else
    {
        printf("you are not a eligible voter");
    }
}