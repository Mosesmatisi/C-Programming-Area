//Area of a Cirle
#include <stdio.h>
#define PI 3.14159
int main() {
	float radius, area;
	
	printf("Please Enter the Radius of the circle in cm: ");
	scanf("%f", &radius);
	
	area = PI * radius * radius;
	printf("The area of a circle in cm square is: %.2f\n", area);
	
	return 0;
}