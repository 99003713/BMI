#include <iostream>
using namespace std;
int main()
{
    double bmi, w, h, bmr, weight, height;
    int age, cat;
    char gender;

    cout << "\n****************************************\n"
         << "            Body Mass Index"
         << "\n****************************************\n";
    cout << "Gender (M or F):";
    cin >> gender;
    while (gender != 'M' && gender != 'm' && gender != 'F' && gender != 'f')
    {
        cout << "Wrong gender input!! Please enter again. Gender (M or F): ";
        cin >> gender;
    }
    cout << "Enter your age : ";
    cin >> cat;

    while (cat < 0 || cat > 120)
    {
        cout << "Wrong age limit!! Please enter again : ";
        cin >> cat;
    }

    //Conditions selection code for female//

    if (gender == 'F' || gender == 'f')
    {
        cout << "Gender : Female" << endl;

        if (cat >= 0 && cat <= 5)
        {
            cout << "Person : Infant" << endl;
        }
        {
            if (cat > 5 && cat <= 59)
                cout << "Person : Adult" << endl;
        }
        if (cat >= 60)
        {
            cout << "Person : Aged" << endl;
        }
        cout << "Please Enter your weight in (kg): ";
        cin >> w;
        cout << "Please Enter your Height in (Inche): ";
        cin >> h;
        bmi = (w) / (h * h); //formulae used for BMI calculator.//
        cout << "BMI REPORT : " << bmi << endl;
        if (bmi < 18.5)
            cout << "Result : Underweight";
        else if (bmi < 18.5 && bmi > 24.9)
            cout << "Result : Normal";
        else
            cout << "Result : Overweight";
    }

    //Conditions selection code for male//

    else if (gender == 'M' || gender == 'm')
    {

        cout << "Gender : Male" << endl;

        if (cat >= 0 && cat <= 5)
        {
            cout << "Person : Infant" << endl;
        }
        {
            if (cat > 5 && cat <= 59)
                cout << "Person : Adult" << endl;
        }
        if (cat >= 60)
        {
            cout << "Person : Aged" << endl;
        }
        {
            if (cat < 0)
                cout << "Invalid age limit" << endl;
        }
        cout << "Please Enter your weight in (kg): ";
        cin >> w;
        cout << "Please Enter your Height in (Inche): ";
        cin >> h;
        bmi = (w) / (h * h); //formulae used for BMI calculator.//
        cout << "BMI REPORT : " << bmi << endl;
        if (bmi < 18.5)
            cout << "Result : Underweight";
        else if (bmi < 18.5 && bmi > 24.9)
            cout << "Result : Normal";
        else
            cout << "Result : Overweight";
    }
    return 0;
}
