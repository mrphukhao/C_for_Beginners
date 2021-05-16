#include <stdio.h>
int main()
{

    int A[8], i;
    for(int i=0; i<8; i++){
        //printf()
        printf("Enter num: ");
        scanf("%d",&A[i]);
        //printf("A[%d]=%d\n",i,A[i]);
    }
    for(int i=0; i<8; i++)
        printf("A[%d]=%d\n",i,A[i]);
    
}