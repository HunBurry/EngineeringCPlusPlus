/*
	Name:		InsertNameHere
	Course: 	InsertCourseNameHere
	Assignment: InsertAssignmentNameHere

	A program to compute the final salinity. 
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a;
    double b;
	double f_a;
	double f_b;
	double c;
    double f_c;
    double farToCen;

	cout << "Use ppt for salinity values." << endl
		 << "Use degrees F for temperatures." << endl
		 << "Enter first salinity and freezing temperature: \n";
	cin >> a >> f_a;
	cout << "Enter second salinity and freezing temperature: \n";
	cin >> c >> f_c;
	cout << "Enter the ending freezing temperature: \n";
	cin >> f_b;

	b = (((f_b - f_a)*(c-a))/(f_c - f_a)) + a

	cout << "The salinity is: "
	<< fixed << setprecision(1) << b << endl
	
	return 0;
}

//------------------------------------------------------
/*
	OUTPUT:
	
	copy and paste output here
*/
