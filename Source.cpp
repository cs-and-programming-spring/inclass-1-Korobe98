


/***********************************************
* Name: Korobellis Anthony
* Email: Korobe98@students.rowan.edu
***********************************************
* Purpose:
*  This program calculates area of circle
***********************************************/

#include <iostream>

using namespace std; 

const float PI = 3.14159; 
const float KM_Per_Mile = 1.6;

int main()
{

	float miles, kms, meters, cms, mms;
	
	//Display purpose of the program
	cout << " ******************************************"<<endl;
	cout << " This program converts distance in miles into distance in kilometers"<<endl;
	cout << " ******************************************\n\n";
	
	//Get user input
	cout << "Please input the distance in miles: ";
	cin >> miles;
	
	//Compute miles into kilometers
	kms = KM_Per_Mile * miles;

	//Convert  kilometers into meters
	meters = kms * 1000;

	// Convert meters into centimeters 
	cms = meters * 100;

	// Convert centimeters into millimeters
	mms = meters * 1000;

	//Display the area 
	cout << " The distance in kilometers is " << kms << "\n\n";

	//Display the area in meters 
	cout << " The distance in meters is " << meters << endl;

	//Display the area in centimeters
	cout << " The distance in centimeters is " << cms << endl;

	//Display the area in millimeters 
	cout << " The distance in millimeters is " << mms << endl;
	cout << "Program has ended" << endl;


	float circumference,radius;

		// Display purpose of the program 
	    cout << " ******************************************" << endl;
	    cout << "This program calculates the circumference of a circle"<<endl;
		cout << " ******************************************\n\n";

		// Get user input 
		cout << " Please enter the radius ";
		cin >> radius;

		// Calculate the radius 
		circumference = PI*radius*2;

		// Display the Circumference 
		cout << "The circumference of the circle is" << circumference << "\n\n"; 

		float celsius, fahrenheit;

		// Display the purpose of the program
		cout << "********************************************************************************************" << endl;
		cout << " This program converts temperature in degrees celsius into temperature in degrees fahrenheit " << endl;
		cout << "********************************************************************************************\n\n";

		// Get user input
		cout << "Please enter temperature in degrees celsius ";
		cin >> celsius;

		// Calculate degrees fahrenheit
		fahrenheit = 9 / 5 * celsius + 32;

		// Display the temperature in degrees fahrenheit
		cout << "The temperature in degrees fahrenheit is " << fahrenheit << "\n\n";

		float years, days, months, hours, minutes, seconds;

		// Display the purpose of the program 
		cout << "************************************************************************************" << endl;
		cout << "This program converts a person's age in years into days, months, hours and minutes" << endl;
		cout << "************************************************************************************\n\n";

		// Get user input
		cout << "please enter age in years";
		cin >> years;

		// Convert years into days
		days = years * 365.25;

		// Convert years into months
		months = years * 12;

		// Convert days into hours
		hours = days * 24;

		// Convert hours into minutes
		minutes = hours * 60;

		// Convert minutes into seconds;
		seconds = minutes * 60;

		// Display age in months
		cout << "The age in months is" << months << endl;

		// Display age in days
		cout << "the age in days is" << days << endl;

		// Display age in hours 
		cout << " the age in hours is" << hours << endl;

		// Display age in minutes
		cout << "the age in minutes is" << minutes << endl;

		// Display age in seconds
		cout << "the age in seconds is" << seconds << endl;

		// Display the purpose of the program
		cout << "********************************************************" << endl;
		cout << "This program displays my first initial as a block letter" << endl;
		cout << "********************************************************\n\n";

		cout << "* * * * * *" << endl;
		cout << "*         *" << endl;
		cout << "*         *" << endl;
		cout << "* * * * * *" << endl;
		cout << "*         *" << endl;
		cout << "*         *" << endl;
		cout << "*         *" << endl;

		
		cout << "program has ended" << endl;

	

		system("pause");
		return 0;
}