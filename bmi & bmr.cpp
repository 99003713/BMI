#include <iostream>
using namespace std;
int main()
{
    double bmi, w, h,bmr,weight,height;
    int age,cat;
    cout<<"Enter your age: ";
	cin>>cat;
	if(cat>=0 && cat<=5)
	{
		cout<<"Person is Infant"<<endl;
	}
	{
	  if  (cat>=5 && cat<=59)
		cout<<"Person is Adult"<<endl;
	}
    if(cat>=60)
	{
		cout<<"Person is Aged"<<endl;
	}
	cout << "Please Enter your weight in kg: ";
    cin >> w;
    cout << "Please Enter your Height in Inche: ";
    cin >> h;
    bmi = (w) / (h * h);
    bmr = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age); 
    cout << "BMR REPORT : Person needs "<< bmr <<" calories to maintain weight.\n";
    cout << "Your BMI is : " << bmi << endl;
    if (bmi < 18.5)
        cout << "Cateogry : Underweight";
    else if (bmi < 18.5 && bmi > 24.9)
        cout << "Cateogry : Normal";
    else
        cout << "Cateogry : Overweight";
        return 0;
}
