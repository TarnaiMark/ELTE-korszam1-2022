// Korszam1.cpp : Defines the entry point for the application.
//

#include "Korszam1.h"

using namespace std;
int main()
{
	double res = integrate( sq<double>, lin<double> ,1000, 0.0, 1.0);
	
	Vector2d v = { 1, 2 };
	Vector2d u = { 3, 4 };
	double  w = v.dot( u);
	std::cout<<"The sum of the two vectors is:\n"<< w <<std::endl;

	Matrix<double> A(2, 2);
	A(0, 0) = 1;
	A(0, 1) = 2;
	A(1, 0) = 3;
	A(1, 1) = 4;

	Matrix<double> B(2, 2);
	B(0, 0) = 1;
	B(0, 1) = 2;
	B(1, 0) = 3;
	B(1, 1) = 4;

	Matrix<double> C = A * 6;

	std::cout << "The matrix is:\n" << C << std::endl;

	
}
