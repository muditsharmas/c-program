#include <stdio.h>
#define E =
void main()
{
int a,b,c;
#ifdef E
{
    a E 2;
    b E 3;
    printf("Aatif\n");
    printf("a = %d, b = %d",a,b);
}  
#else
{
    c=2;
    printf("c = %d",c);

}
#endif
getchar();
}