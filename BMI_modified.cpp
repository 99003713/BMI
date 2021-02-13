/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    double bmi, w, h, bmr, weight, height;
    int age, cat;
    char gender;
    string name;
    cout<<"Enter the name ";
    cin>>name;
    
    cout << "Gender (M or F):";
    cin >> gender;
    while (gender != 'M' && gender != 'm' && gender != 'F' && gender != 'f')
    {
        cout << "Wrong gender input.Please enter again. Gender (M or F): ";
        cin >> gender;
    }
    
    
     cout<<"Enter your age : ";
       cin >> cat;
      
        while (cat <0 )
    {
        cout << "Wrong age limit.Please enter again : ";
        cin >> cat;
    }
    
    
    if (gender == 'F' || gender == 'f')
    {
        cout << "Gender : Female" << endl;
        cout << "Enter your age: ";
     
    if (cat >= 0 && cat <= 5)
        {
            cout << "Person : Infant" << endl;
        }
        {
            if (cat >= 5 && cat <= 59)
                cout << "Person : Adult" << endl;
        }
        if (cat >= 60)
        {
            cout << "Person : Aged" << endl;
        }
        {
            if (cat < 0)
            cout << "Invalid age limit"<<endl;
        }
        cout << "Please Enter your weight in (kg): ";
        cin >> w;
        cout << "Please Enter your Height in (Inche): ";
        cin >> h;
        bmi = (w) / (h * h);
        bmr = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);
        cout << "BMI REPORT : " << bmi << endl;
        cout << "BMR REPORT : Person needs " << bmr << " calories to maintain weight.\n";
        if (bmi < 18.5)
            cout << "Result : Underweight";
        else if (bmi < 18.5 && bmi > 24.9)
            cout << "Result : Normal";
        else
            cout << "Result : Overweight";
    }
    
    
     else if (gender == 'M' || gender == 'm')
    {
   
        cout << "Gender : Male" << endl;
        cout << "Enter your age: ";
     
        if (cat >= 0 && cat <= 5)
        {
            cout << "Person : Infant" << endl;
        }
        {
            if (cat >= 5 && cat <= 59)
                cout << "Person : Adult" << endl;
        }
        if (cat >= 60)
        {
            cout << "Person : Aged" << endl;
        }
        {
            if (cat < 0)
            cout << "Invalid age limit"<<endl;
        }
        cout << "Please Enter your weight in (kg): ";
        cin >> w;
        cout << "Please Enter your Height in (Inche): ";
        cin >> h;
        bmi = (w) / (h * h);
        bmr = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);
        cout << "BMI REPORT : " << bmi << endl;
        cout << "BMR REPORT : "<<name<< " needs " << bmr << " calories to maintain weight.\n";
        if (bmi < 18.5)
            cout << "Result : Underweight";
        else if (bmi < 18.5 && bmi > 24.9)
            cout << "Result : Normal";
        else
            cout << "Result : Overweight";
    }
    return 0;
}