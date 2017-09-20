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
    
    switch(rank) {
        case 1 :
            cout << "in the lower division." << endl;
            break;
        case 2 : 
            cout << "in the lower division." << endl;
            break;
        case 3 : 
            cout << "in the upper division." << endl;
            break;
        case 4: 
            cout << "in the upper division." << endl;
            break;
        case 5:
            cout << "a graduate student." << endl;
            break;
        default :
            cout << "an invalid rank.";
    }

    return 0;
}

//------------------------------------------------------
/*
	OUTPUT:
	
	Copy and paste your user-specific output here. 
*/
