#include <stdio.h>
#include<math.h>
float Calculate_Area_Triangle(float b,float h);
int Shape_Triangle(int b,int h);

float Calculate_Area_Rectangle(float w,float l);
int Shape_Rectangle(int w,int l);

float Calculate_Area_Circle(float r);
int Shape_Circle(int r);

int main()
{
	char type;
	printf("Enter type of shapes (t,r,c): ");
	scanf("%c",&type);
	
	if (type=='t')
		{
			float b,h;
			printf("\nEnter value of base : ");
			scanf("%f",&b);
			printf("Enter value of height : ");
			scanf("%f",&h);
			
			printf("\nArea of a Triangle is %.2f\n" ,Calculate_Area_Triangle(b,h)); // area 
			Shape_Triangle(b,h);
		}
	
	else if (type=='r')
		{
			float w;
			float l;
			printf("\nEnter value of Width : ");
			scanf("%f",&w);
			printf("Enter value of Length : ");
			scanf("%f",&l);

			printf("\nArea of a Square is %.2f\n" ,Calculate_Area_Rectangle(w,l));
			Shape_Rectangle(w,l);
		}
		
	else if (type=='c')
		{
			float r;
			printf("\nEnter value of radius : ");
			scanf("%f",&r);

			printf("\nArea of a Circle is %.2f\n" ,Calculate_Area_Circle(r));
			Shape_Circle(r);
		}
	else
		printf("Type only : Triangle = t, Rectangle = r, Circle = c");
}

// Func Triangle
float Calculate_Area_Triangle(float b,float h)
{
	float t;
	t = 0.5 * b * h;
	return(t);
}
int Shape_Triangle(int b,int h)
{
	for(int i=1; i<=h; i++) // h= 5 // i=1 ,i<=1
	{
		for(int x=1; x<=i; x++) //x=1 ,x<=1
			printf(" *"); // *
		printf("\n");	 //
	}
	
}

// Func Rectangle
float Calculate_Area_Rectangle(float w,float l)
{
	float s;
	s = w * l;
	return(s);
}
int Shape_Rectangle(int w,int l)
{
	for(int i=1;i<=w ;i++)
	{
		printf(" ");
		for(int x=1; x<=l; x++)
			printf("* ");
		printf("\n");
	}
}

// Func Circle
float Calculate_Area_Circle(float r)
{
	float c;
	c = 3.14 * r * r;
	return(c);
}
int Shape_Circle(int r)
{
	float n,j,i,p;
	p=floor((4*r-2.5)/5.8);
	for(j=p;j>=-p;j--){
    	for(i=-r;i<=r;i++){
        	if(p*p*i*i+r*r*j*j<=r*r*p*p)
            	printf("*");
        	else{
            	printf(" ");
        	}
    	}
    printf("\n");
	}
}

