/*
Parker Wales
pa945111 @ucf.edu
PracticeProblem1
Dr. Rahaman
COP 3233C - Intro to C Programming
*/
#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main(void){

	float x1,y1,x2,y2,distance,area; //All the variables

	printf("Please enter the first point (x1,y1): ");
	scanf("%f %f",&x1,&y1); // Store floats into (x1,y1)
	printf("Please enter the second point (x2,y2): ");
	scanf("%f %f",&x2,&y2); // Store floats into (x2,y2)
	
	distance = sqrt(pow((x2-x1),2) + pow((y2-y1),2) ); //Calculates distance
	printf("\nThe distance between the two points is %f\n",distance);
	
	area = PI*pow(distance/2.0 , 2); // pi(diameter/2)^2
	printf("The area of the city encompassed by your request is %f mi^2\n",area);
}
