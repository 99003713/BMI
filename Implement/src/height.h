#include<iostream>
#include "age.h"
using namespace std;
int height()

{
    double feet, inch,cent;
	cout << " \nInput the height in centimeter : ";
    cin >> cent;
	feet = (0.032*cent); 
	inch = (0.3937*cent);
	cout << "\n The height in feet is: "<< feet << endl;
	cout << " \nThe height in inches is: "<< inch << endl;	
	
    age();
    return 0;
}
