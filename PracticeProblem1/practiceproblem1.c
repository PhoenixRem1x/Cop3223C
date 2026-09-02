#include <stdio.h>
int main(void) {
	int a;
	int b;
	printf("Input 2 numbers, in the form 'a b', to be added \nnums: ");
	scanf("%d %d",&a,&b);
	printf("result1 = %d\n", a+b );
	printf("result2 = %d\n", a-b );
	printf("result3 = %d\n", a*b );
	printf("result4 = %d\n", a/b );
	printf("result5 = %d\n", (a+b)*(a-b) );

}

