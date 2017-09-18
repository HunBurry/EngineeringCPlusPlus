/*
	Name:		InsertNameHere
	Course: 	InsertCourseNameHere
	Assignment: InsertAssignmentNameHere

	A program to compute distance traveled.
*/
#include <iostream>
#include <cstdlib>
#include <math>

using namespace std;

int main()
{
	double distance;
	double x0 = 10.1;
	double v0 = 5.5;
	double a = 1.1;
	double t = 10; 
	distance = x0 + (v0 * t) + (a * (t * t));

	cout << "Distance is" << distance; 
	
	return EXIT_SUCCESS;
}

//------------------------------------------------------
/*
	OUTPUT:
	
	Copy and paste your user-specific output here.
*/
