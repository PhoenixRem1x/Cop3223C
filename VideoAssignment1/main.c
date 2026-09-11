#include <stdio.h>
#include <stdbool.h>

int main(void){

	int x = 5;
	int y = 2;
	int result;
	float result2;
	scanf("%%"); //pause
	// Expressions

	result = x+y;
	printf(" X+Y= %d \n", result);

	result= x-y;
	printf(" X-Y= %d \n", result);

	result = x*y;
	printf(" X*Y= %d \n", result);

	result = x/y; //Interger divison
	printf(" X/Y= %d \n", result);

	result2 = (float)x / (float) y;
	printf(" X/Y= %f \n\n", result2);


	scanf("%%"); //pause
	// Statements
	bool t = true;
	bool f = false;

	if ( t ){
		printf("True!\n");
	}

	if ( f ) {
		printf("False!\n");
	}

	printf("x:%d y:%d\n ",x,y);
	if (x>y)
		printf(" X is greater than Y \n");

}
