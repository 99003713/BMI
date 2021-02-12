#include<iostream>
#include "gendef.h"
using namespace std;
int calc_gender(char gender)
{
    int cat;
    cout << "Please enter your age : \n";
    cin >> cat;
    while (gender != 'M' && gender != 'm' && gender != 'F' && gender != 'f')
    {
        cout << "Wrong gender input!! Please enter again. Gender (M or F): ";
        cin >> gender;
    }
    while (cat < 0 || cat > 120)
    {
        cout << "Wrong age limit!! Please enter again : ";
        cin >> cat;
    }
    gendef(gender, cat);
    return 0;
}
