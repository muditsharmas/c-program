#include <stdio.h>
void matrices(int *p, int *row, int *col);
void matrices(int *p, int *row, int *col){
    for (int i = 0; i < *row; ++i)
    {
            for (int j = 0; j < *col; ++j)
            {
                printf("%d ", *(p+i+j));
                if(j == *col-1){
                    printf("\n\n");
                }

            }
            
    }
    
}
int main()
{
  int  row = 3, col = 3,i,j, arr[3][3];
    for ( i = 0; i < row; ++i)
    {
        for ( j = 0; j < col;++j)
        {
            printf("\nElement %d%d = ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
     matrices(arr[3][3],&row,&col);
    return 0;
}