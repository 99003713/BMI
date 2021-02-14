#include<iostream>
#include "calc_gender.h"
using namespace std;
int  main()

{

char gender;
    cout << "\n****************************************\n"
         << "            Body Mass Index"
         << "\n****************************************\n";
    cout << "Gender (M or F):";
    cin >> gender;
    calc_gender(gender);

return 0;
}