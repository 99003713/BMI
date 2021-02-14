#include<iostream>
#include "bmi1.h"
using namespace std;
int gendef(char gender, int cat)
{
    int w, h, age, bmi;
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
        bmi1(w, h);
    }
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
        bmi1(w, h);
    }
}