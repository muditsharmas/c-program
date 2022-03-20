/*#include <stdio.h>
int main()
{
    int N, i, j, is_up = 1, is_low = 1, a;
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &a);
            if (j > i && a != 0)
                is_low = 0;
            if (j < i && a != 0)
                is_up = 0;
        }
    }
    if (is_up == 1 && is_low == 1)
        printf("2");
    else if (is_low == 1)
        printf("-1");
    else if (is_up == 1)
        printf("1");
    else
        printf("0");
    return 0;
}

#include<stdio.h>
int main()
{
    int perv,curr;
    int u_count = 1;
    scanf("%d",&perv);
    scanf("%d",&curr);
    while(curr != -1){
        if(perv != curr){
            u_count++;
        }
        perv = curr;
        scanf("%d",&curr);
    }
    if(u_count >= 3)
        printf("1");
    else
        printf("0");
    return 0;
}*/

#include<stdio.h>

int main()
{
    int i,num;
    int max1,max2;
    scanf("%d",&num);

    max1 = max2 = num;
    while(num != -1)
    {
        if(num > max1)
        {
            max2 = max1;
            max1 = num;
        }
        else if(num > max2 && num < max1)
        {
            max2 = num;
        }
        scanf("%d",&num);
    }
    if(max1 != max2)
        printf("%d",max2);
    else
        printf("0");
    return 0;
}