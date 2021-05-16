// รับค่าใน main // คำนวณใน func ย่อย // print main 
#include <stdio.h>
#include <math.h>
double area_of_triangle(double, double, double);

int main()
{
  double a, b, c, s, area;

  //printf("Enter the lengths of sides of a triangle\n");
  //scanf("%lf%lf%lf", &a, &b, ); // รับค่าทีเดียวพร้อมกัน
  //scanf("%lf%lf", &a, &b );

  printf("Enter the lengths of base of a triangle : ");
  scanf("%lf", &a);
  
  printf("Enter the lengths of high of a triangle : ");
  scanf("%lf", &b);

  s = area_of_triangle(a, b, c);
  printf("\nArea of the triangle = %.lf\n", s);
  

  return 0;
}

double area_of_triangle(double a, double b, double c)
{
  double s, area;
  //s = (a+b+c)/2;
  s = (a*b)/2;

  //area = sqrt(s*(s-a)*(s-b)*(s-c));
  //return area;
  return s;
}