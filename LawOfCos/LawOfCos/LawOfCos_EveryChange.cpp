/**
@file	 LawOfCos_EveryChange
@author	 Christopher Nguyen
@date	 01/10/18
@version 0.0.0

@brief	 Calculate angle with every noticable change in rotation.
*/

// headers
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <vector>
using namespace std;

/**

*/
double angle(vector<double> A, vector<double> C, vector<double> B) {
	double a = sqrt(pow((C[0]-B[0]), 2) + pow((C[1]-B[1]), 2) + pow((C[2]-B[2]), 2));
	double b = sqrt(pow((C[0]-A[0]), 2) + pow((C[1]-A[1]), 2) + pow((C[2]-A[2]), 2));
	double c = sqrt(pow((A[0]-B[0]), 2) + pow((A[1]-B[1]), 2) + pow((A[2]-B[2]), 2));
	double angle = acos((pow(a, 2) + pow(b, 2) - pow(c, 2))/(2*a*b));
	return angle*180/M_PI;
}

int main() {
	double x0 = 0;
	double y0 = 1;
	double z0 = 0;

	double x;
	double y;
	double z;
	cout << "For B,\n";
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	cout << "Enter z: ";
	cin >> z;

	vector<double> C ={ 0, 0, 0 };
	vector<double> A ={ x0, y0, z0 };
	vector<double> B ={ x, y, z };

	double change = angle(A, C, B);
	cout << "\nchange in angle: " << change << "degrees\n\n";

	system("pause");
	return 0;
}
