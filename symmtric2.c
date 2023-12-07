#include<stdio.h>

int main()
{
    int mat1[3][3], mat2[3][3], mat3[3][3],  i, j, k;
    printf("Enter first matrix element: ");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
   
printf("transpose  is\n") ;  
      for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++){
         mat2[i][j]=mat1[j][i];
        printf("%d\n", mat2[i][j]);
        }
        
    }
    return 0;
}
