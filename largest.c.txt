
#include <stdio.h>

#define MAX(x, y) (x > y ? x : y)
#define MIN(x, y) (x < y ? x : y)

int main()
{
    int num1, num2;

    printf("Enter any two number to check max and min: ");
    scanf("%d%d", &num1, &num2);

    printf("MAX(%d, %d) = %d\n", num1, num2, MAX(num1, num2));
    printf("MIN(%d, %d) = %d\n", num1, num2, MIN(num1, num2));

    return 0;
}