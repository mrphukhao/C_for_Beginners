#include<stdio.h>
 
int main(){
    int rows, cols , i, j, length, breadth, area;
    
    // รับค่า 
    //printf("Enter rows and columns of rectangle\n");
    //scanf("%d %d", &rows, &cols);

    // input ค่า กว้าง * ยาว
    printf("\nEnter the Length of Rectangle : "); // กว้าง
    scanf("%d", &length);
 
    printf("\nEnter the Breadth of Rectangle : "); // ยาว
    scanf("%d", &breadth);
    
    //คำนวณ พื้นที่
    area = length * breadth;
    printf("\nArea of Rectangle : %d \n", area);
 
    //Display  รูปภาพ 
    /* Row iterator for loop */
    for(i = 0; i < breadth; i++){
     /* Column iterator for loop */
        for(j = 0; j < length; j++){
           printf("*");
        }
        printf("\n");
    }
    return 0;
}