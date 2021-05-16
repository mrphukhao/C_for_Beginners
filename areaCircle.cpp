#include <stdio.h>
int main()
{
   int circle_radius;
   float PI_VALUE=3.14, circle_area, circle_circumf;

   //Ask user to enter the radius of circle
   printf("\nEnter radius of circle: ");
   //Storing the user input into variable circle_radius
   scanf("%d",&circle_radius);

   //Calculate and display Area
   circle_area = PI_VALUE * circle_radius * circle_radius;
   printf("\nArea of circle is: %f",circle_area);


   return(0);
}