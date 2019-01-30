


/***********************************************
* Name: Korobellis Anthony
* Email: Korobe98@students.rowan.edu
***********************************************
* Purpose:
*  This program calculates area of circle
***********************************************/

#include <iostream>

using namespace std; 

const  float PI = 3.14159; 
const float KM_Per_Mile = 1.6;

int main()
{

	float miles, kms;
	
	//Display purpose of the program
	cout << " ******************************************"<<endl;
	cout << " This program converts distance in miles into distance in kilometers"<<endl;
	cout << " ******************************************\n\n";
	
	//Get user input
	cout << "Please input the distance in miles: ";
	cin >> miles;
	
	//Compute miles into kilometers
	kms = KM_Per_Mile * miles;
	
	//Display the area 
	cout << " The distance in kilometers is " << kms << "\n\n";
	cout << "Program has ended"<<endl;

	system("pause");
	
	return 0;
}