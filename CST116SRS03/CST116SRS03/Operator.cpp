// CST116SRS03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using std::cout;
using std::endl;
#include <cstdio>
#include <cmath>



int main()
{
	int i0, i1;

	double d0, d1;

	std::cin >> i0;
	std::cin >> i1;
	std::cin >> d0;
	std::cin >> d1;

	std::cout << "i0 + i1 == " << i0 + i1 << endl;

	std::cout << "i1 + d0 == " << i1 + d0 << endl;

	std::cout << "d0 + d1 == " << d0 + d1 << endl;

	std::cout << "i0 - i1 == " << i0 - i1 << endl;

	std::cout << "i1 - d0 == " << i1 - d0 << endl;

	std::cout << "d0 - d1 == " << d0 - d1 << endl;

	std::cout << "i0 * i1 == " << i0 * i1 << endl;

	std::cout << "i1 * d0 == " << i1 * d0 << endl;

	std::cout << "d0 * d1 == " << d0 * d1 << endl;

	std::cout << "i0 / i1 == " << i0 / i1 << endl;

	std::cout << "i1 / d0 == " << i1 / d0 << endl;

	std::cout << "d0 / d1 == " << d0 / d1 << endl;

	std::cout << "i0 % i1 == " << i0 % i1 << endl;


    return 0;
}

