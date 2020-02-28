

#include<stdio.h>
#include "advmath.h"



int main(){

	/* 
	// testing the absolute value function 
	int a = -1;
	double b = -20.2;
	printf("abs(%d) = %d\tabs(%f) = %f\n\n",a,abs(a), b,abs(b));
	*/


	/*
	// testing the factorial function
	int a = 5;
	printf("\nfactorial(%d) = %d\n\n", a, factorial(a));
	*/

	/*
	// Testing the dotproduct, dot(T, T), function
	int a[3] = {0,1,1};
	int b[3] = {1,0,1};
	printf("dot([0,1,1], [1,0,1]) = %d", dot(a,b));
	*/
	
	/*
	// Testing the dotproduct, dotX(T, T, int), function
	int a[3] = {0,1,1};
	int b[3] = {1,0,1};
	printf("dot([0,1,1], [1,0,1], 3) = %d\n", dotX(a,b,3));
	double c[5] = {0, 0, 0, 10.1, 10.1};
	double d[5] = {0, 1, 1, 1, 1};
	printf("dot( [0, 0, 0, 10.1, 10.1], [0, 1, 1, 1, 1]) = %f\n", dotX(c,d,5));
	*/

	
	// Testing out our Crossproduct function
	int a[3] = {1, 2, 3};
	int b[3] = {1, 5, 7};
	int *c;
	c = cross(a,b);
	printf("\nCross product: %di %dj %dk\n", c[0], c[1], c[2]);

	double f[3] = {1, 2, 3};
	double d[3] = {1, 5, 7};
	double *e;
	e = cross(f,d);
	printf("\nCross product: %fi %fj %fk\n", e[0], e[1], e[2]);
	//delete c;
	


	/*
	// testing out the Newton's sqrt() function
	int k = 10000000;
	double b = sqrt(k);
	printf("\nsqrt(%d) = %f\n",k, b);
	*/

	// Testing exp_int()
	//printf("exp(%d, %d) = %d\n", 1, 2, exp(1,2));
	//printf("exp(%d, %d) = %d\n", 2, 2, exp(2,2));
	//printf("exp(%d, %d) = %d\n", 3, 4, exp(3,4));

	// testing modulus
	//printf("\n\n%f\n\n", modulus(2.000, 1.5707)/1.5707);

	//printf("atan(%d) = %f\n", 1, atan(1));
	//printf("atan(%d) = %f\n", 2, atan(2));

	/*
	printf("sin(%f) = %f\n", 1.0, sin(1.0));
	printf("sin(%f) = %f\n", 2.0, sin(2.0));
	printf("sin(%f) = %f\n", 1.570796, sin(1.570796));
	*/	
	return 0;
}
