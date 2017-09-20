/*
	Name:		InsertNameHere
	Course: 	InsertCourseNameHere
	Assignment: InsertAssignmentNameHere

	A program to compute InsertComputationHere. 
*/
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int rank; 

	cout << "Enter the student's rank: " << endl;
	cin >> rank;

	cout << "The student's rank is ";

	if (rank == 1 || rank == 2) {
		cout << "in the lower division." << endl;
	}
	else {
		if (rank==3 || rank==4) {
			cout << "in the upper division." << endl; 
		}
		else {
			if (rank==5) {
				cout << "a graduate student." << endl;
			}	
			else {
				cout << "an invalid rank." << endl;
			}
		}
	}
	return 0;
}

//------------------------------------------------------
/*
	OUTPUT:
	
	Copy and paste your user-specific output here. 
*/
