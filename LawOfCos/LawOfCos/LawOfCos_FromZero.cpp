/**
@file	 LawOfCos_FromZero
@author	 Christopher Nguyen
@date	 01/10/18
@version 0.0.0

@brief	 Calculate angle with two fixed points for reference
*/

// headers
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

/**
@brief  Calculate angle in degrees via law of cosine

@param  A is an initialized vector variable
@param  B is an initialized vector variable
@param  C is an initialized vector variable
@return angle is an initialized double variable
*/
double angle(double A[], double B[], double C[]) {
	double a = sqrt( pow((C[0]-B[0]), 2) + pow((C[1]-B[1]), 2) + pow((C[2]-B[2]), 2) );
	double b = sqrt( pow((C[0]-A[0]), 2) + pow((C[1]-A[1]), 2) + pow((C[2]-A[2]), 2) );
	double c = sqrt( pow((A[0]-B[0]), 2) + pow((A[1]-B[1]), 2) + pow((A[2]-B[2]), 2) );
	double angleRad = acos( (pow(a,2) + pow(b,2) - pow(c,2))/(2*a*b));
	double angleDeg = angleRad*180/M_PI;
	return angleDeg;
}

/**
@brief  Executes program with user input

@param  N/A
@return 0
*/
int main() {
	// fixed Point A, front of subject as reference
	double Ax = 0;
	double Ay = 1;
	double Az = 0; // negligible

	// changing point
	double Bx;
	double By;
	double Bz;
	cout << "For B,\n";
	cout << "Enter x: "; cin >> Bx;
	cout << "Enter y: "; cin >> By;
	cout << "Enter z: "; cin >> Bz; // negligible

	// fixed Point C, origin
	double Cx = 0;
	double Cy = 0;
	double Cz = 0; // negligible

	double A[] = { Ax, Ay, Az };
	double B[] = { Bx, By, Bz };
	double C[] = { Cx, Cy, Cz };

	double change = angle(A, C, B);
	cout << "\nchange in angle: " << change << "degrees\n\n";

	system("pause");
	return 0;
}
