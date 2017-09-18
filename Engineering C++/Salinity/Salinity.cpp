/*
	Name:		InsertNameHere
	Course: 	InsertCourseNameHere
	Assignment: InsertAssignmentNameHere

	A program to compute the final freezing temperature. 
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double a;
	double f_a;
	double f_b;
	double c;
	double f_c;

	cout << "Use ppt for salinity values." << endl
		 << "Use degrees F for temperatures." << endl
		 << "Enter first salinity and freezing temperature: \n";
	cin >> a >> f_a;
	cout << "Enter second salinity and freezing temperature: \n";
	cin >> c >> f_c;
	cout << "Enter new salinity: \n";
	cin >> b;

	f_b = f_a + (b-a) / (c-a) * (f_c - f_a);

	cout << "New freezing temperature in degrees F: "
		 << fixed << setprecision(1) << f_b << endl;
	
	return 0;
}

//------------------------------------------------------
/*
	OUTPUT:
	
	Copy and paste your user-specific output here. 
*/
