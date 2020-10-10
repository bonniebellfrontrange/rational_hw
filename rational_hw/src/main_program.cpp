/*
 * Homework5.cpp
 *
 *  Created on: Sep 27, 2020
 *      Author: cj6bo
 */

#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Rational.h"

using namespace std;

int main() {
	Rational fraction1(1,2);
	Rational fraction2(2,4);

	fraction1.add(fraction2);
	fraction1.sub(fraction2);
	if (fraction1.eq(fraction2)) {
		cout<<"Add and eq work great"<<endl;
	}
	cout<<"Just checking"<<endl;
	fraction1.output(cout);
	fraction2.output(cout);
	//insert any test code for Rational class
	return (0);
}
