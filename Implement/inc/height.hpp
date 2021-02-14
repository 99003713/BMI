#include <iostream>
#include "age.hpp"
using namespace std;
int height()

{
	double feet, inch, cent;
	cout << " \nInput the height in centimeter : ";
	cin >> cent;
	while (cent < 20 || cent > 300)
	{
		cout << "Wrong height input!! Please enter again : ";
		cin >> cent;
	}
	//formulae for calculating height//
	feet = (0.032 * cent);
	inch = (0.3937 * cent);
	cout << "\n The height in feet is: " << feet << endl;
	cout << " \nThe height in inches is: " << inch << endl;

	age();
	return 0;
}
