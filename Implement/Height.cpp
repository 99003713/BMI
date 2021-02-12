#include<iostream>
using namespace std;

int main()
{
    double feet, inch,cent;
	
    cout << " Input the height in centimeter : ";
    cin >> cent;
	feet = (0.032*cent); 
	inch = (0.3937*cent);
	cout << " The height in feet is: "<< feet << endl;
	cout << " The height in inches is: "<< inch << endl;	
	cout << endl;
    return 0;
}
