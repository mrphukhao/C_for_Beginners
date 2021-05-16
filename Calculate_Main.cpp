#include <stdio.h>
//#include "circle.h"
double Calculate_Triangle(double a, b);
double Calculate_Rectangle(double length, breadth,);
double Calculate_Circle(double circle_radius);
int t,r,c,type,length,breadth;




int main(){
    int t,r,c,type,length,breadth;

    printf("Enter type of shapes (t,r,c): "); // Check type // Triangle // rectangle // Circle
    scanf("%d",&type);

    if(type==t){
        //call func Triangle
        double Calculate_Triangle(double a, b);
    }

    else if(type==r){
        //call func rectangle
        double Calculate_Rectangle(double length, breadth,);
    }

    else if(type==t){
        //call func Circle
        double Calculate_Circle();
    }
    return 0;
}





double Calculate_Triangle(double a, b){
        //input
    double a, b, s, i, j;  
 
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



}

double Calculate_Rectangle(double length, breadth,){
    int rows, cols , i, j, length, breadth, area;

    // input ค่า กว้าง * ยาว
    printf("\nEnter the Length of Rectangle : "); // กว้าง
    scanf("%d", &length);
 
    printf("\nEnter the Breadth of Rectangle : "); // ยาว
    scanf("%d", &breadth);
    
    //คำนวณ พื้นที่
    area = length * breadth;
    ("\nArea of Rectangle : %d \n", area);
 
    //Display  รูปภาพ 
    for(i = 0; i < breadth; i++){
     /* Column iterator for loop */
        for(j = 0; j < length; j++){
           printf("*");
        }
        printf("\n");
    }
}


double Calculate_Circle(double circle_radius){
   
   int circle_radius;
   float PI_VALUE=3.14, circle_area, circle_circumf;

   //Ask user to enter the radius of circle
   printf("\nEnter radius of circle: ");
   //Storing the user input into variable circle_radius
   scanf("%d",&circle_radius);

   //Calculate and display Area
   circle_area = PI_VALUE * circle_radius * circle_radius;
   printf("\nArea of circle is: %f",circle_area);


}


