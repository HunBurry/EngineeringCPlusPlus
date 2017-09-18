/*
	Name:		InsertNameHere
	Course: 	InsertCourseNameHere
	Assignment: InsertAssignmentNameHere

	A program to compute distance (pythag).
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x1;
	double y1;
	double x2;
	double y2;
	double side1;
	double side2;
	double distance;

	cout << "What is your x1 value? ";
	cin >> x1;

	cout << "What is your x2 value? ";
	cin >> x2;

	cout << "What is your y1 value? ";
	cin >> y1;

	cout << "What is your y2 value? ";
	cin >> y2;

	side1 = x2 - x1;
	side2 = y2 - y1;

	distance = sqrt(side1*side1 + side2*side2);

	cout << "The distance between the two points is " << distance << endl;

	return 0;
} 

//------------------------------------------------------
/*
	OUTPUT:
	
	Copy and paste your user-specific output here. 
*/
