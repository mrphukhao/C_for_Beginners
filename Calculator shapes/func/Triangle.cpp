#include <stdio.h>  
  
int main()  
{  
    //input
    double a, b, s, i, j, l;  
    //printf("Enter the number of rows");  
    //scanf("%d",&n); 
    printf("Enter the lengths of base of a triangle : ");
    scanf("%lf", &a);
  
    printf("Enter the lengths of high of a triangle : ");
    scanf("%lf", &b);

    //Calculate
    s = (a*b)/2;

    // print 
    printf("\nArea of the triangle = %.2lf\n", s);

    // Shape
    for(int i=1;i<=b-1;i++) // b high -1 (-base)
    {  
        printf("* ");
        for(int j=1;j<=i-1;j++)  
        {  
            printf("* ");  

        }  
        printf("\n");  
    }

    for(int l=1; l<=a; l++) //(base)
        printf("* ");

    return 0;  
}  