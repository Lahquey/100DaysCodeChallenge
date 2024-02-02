#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float Length;
	float Width;
	float pi = M_PI;

	printf("Enter length of Rectangle: ");
	scanf("%f", &Length);
	printf("Enter Width of Rectangle: ");
	scanf("%f", &Width);

	float RectangleArea = Length*Width;
	float CircleArea = pi*(Width/2)*(Width/2);
	//printf("%f\n %f\n", RectangleArea,CircleArea);
	float Area = RectangleArea - CircleArea;

	printf("Area of Shaded Part is %f\n", Area);


}

