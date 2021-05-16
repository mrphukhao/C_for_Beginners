#include <stdio.h>
int main()
{

    int A[3][4], i, j, n;
    for(int i=0; i<3; i++){
        //printf()
        for(int j=0; j<4; j++){
            printf("Enter num: ");
            scanf("%d", &n);
            A[i][j] = n;
            //A[i][j]=i*j;
            //printf("A[%d][%d]=%d\n",i,j,A[i][j]);
        }

    }
    for(int i=0; i<3; i++){
        //printf()
        for(int j=0; j<4; j++)
        printf("A[%d][%d]=%d\n",i,j,A[i][j]);
    }
    
}
//homework 2d  input data frome user