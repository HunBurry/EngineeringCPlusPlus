/*
	Name:		InsertNameHere
	Course: 	InsertCourseNameHere
	Assignment: InsertAssignmentNameHere

	A program to compute the weight of an amino acid. 
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double numOfO;
	double numOfC;
	double numOfN;
	double numOfS;
	double numOfH;
	double weight;

	cout << "How many O atoms are there?";
	cin >> numOfO;

	cout << "How many C atoms are there?";
	cin >> numOfC;

	cout << "How many N atoms are there?";
	cin >> numOfN;

	cout << "How many S atoms are there?";
	cin >> numOfS;

	cout << "How many H atoms are there?";
	cin >> numOfH;

	weight = ((numOfO * 15.994) + (numOfC * 12.011) + (numOfN * 14.00674) + (numOfS * 32.066 ) + (numOfH * 1.00794));

	cout << "The weight of the amino acid is " << fixed << setprecision(1) << weight;

	return 0;
}

//------------------------------------------------------
/*
	OUTPUT:
	
	Copy and paste your user-specific output here. 
*/
