// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <cmath>

int main()
{
	
	double a, b, c, x, x1, x2, d;

	printf("Enter the value: ");
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	d = (b*b) - 4 * a*c;
	if (d == 0)
	{
		x = -b + (2 * a);
		x = -b + (2 * a);
		printf("The roots are equal and they are x = f%", x);
	}
	else if (d > 0) 
	{
		x1 = (-b + sqrt(d))/ (2 * a);
		x2 = (-b - sqrt(d))/ (2 * a);
		printf("the roots are x1=%f, \n x2=%f", x1, x2);
	}
	else { printf("The roots are imagine!");
	}
	


	return 0;

}