#include <stdio.h>
//#include "circle.h"
double Calculate_Rectangle();
double Calculate_Rectangle(int length,int breadth);
double Calculate_Circle();


int main(){
    int a, b, t, r, c, type, length, breadth;

    printf("Enter type of shapes (t,r,c): "); // Check type // Triangle // rectangle // Circle
    scanf("%d",&type);
    if(type=='t'){
        //call func Triangle
        double Calculate_Triangle(int a, int b);
    }

    else if(type=='r'){
        //call func rectangle
    // printf("\nEnter the Length of Rectangle : "); // กว้าง
    // scanf("%d", &length);
 
    // printf("\nEnter the Breadth of Rectangle : "); // ยาว
    // scanf("%d", &breadth);
    
        Shape_Rectangle(int length,int breadth);

    }

    else if(type=='c'){
        //call func Circle
        double Calculate_Circle();
    }
    return 0;
}





double Calculate_Triangle(int a, int b){
            //input
    double s, i, j;  
 
    printf("Enter the lengths of base of a triangle : ");
    scanf("%lf", &a);
  
    printf("Enter the lengths of high of a triangle : ");
    scanf("%lf", &b);

    //Calculate
    s = (a*b)/2;

    // print 
    printf("\nArea of the triangle = %.2lf\n", s);

    //Shape
    for(int i=1;i<=s;i++)  
    {  
        for(int j=1;j<=i;j++)  
        {  
            printf("* ");  
        }  
        printf("\n");  
    }
    return 0;
}

double Calculate_Rectangle(int length,int breadth){
    int i, j, area;

    // input ค่า กว้าง * ยาว
    // printf("\nEnter the Length of Rectangle : "); // กว้าง
    // scanf("%d", &length);
 
    // printf("\nEnter the Breadth of Rectangle : "); // ยาว
    // scanf("%d", &breadth);
    
    //คำนวณ พื้นที่
    area = length * breadth;
    //("\nArea of Rectangle : %d \n", area);
 
    //Display  รูปภาพ 

    return area;
}

void Shape_Rectangle(int length,int breadth){
    int i, j;
    for(i = 0; i < breadth; i++){
     /* Column iterator for loop */
        for(j = 0; j < length; j++){
           printf("*");
        }
        printf("\n");
    }
}


double Calculate_Circle(){
   
   int circle_radius;
   float PI_VALUE=3.14, circle_area, circle_circumf;

   //Ask user to enter the radius of circle
   printf("\nEnter radius of circle: ");
   //Storing the user input into variable circle_radius
   scanf("%d",&circle_radius);

   //Calculate and display Area
   circle_area = PI_VALUE * circle_radius * circle_radius;
   printf("\nArea of circle is: %f",circle_area);

   return 0;

}


