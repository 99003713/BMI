#include<iostream>
#include "height.h"
using namespace std;
int bmi1(int w, int h)
{   int bmi;
    bmi = (w) / (h * h); //formulae used for BMI calculator.//
    cout << "BMI REPORT : " << bmi << endl;
    if (bmi < 18.5)
        cout << "Result : Underweight";
    else if (bmi < 18.5 && bmi > 24.9)
        cout << "Result : Normal";
    else
        cout << "Result : Overweight";
        height();
        return 0;
}