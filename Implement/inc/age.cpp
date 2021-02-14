#include <iostream>
#include "bmr.h"
using namespace std;
int age()
 {
 	int birthyear, birthmonth, currentmonth,currentyear;
 
cout<<"\n\tAge Calculator\n";
cout<<"Enter Your Birth Year:";
 /* Enter the birth year */
cin>>birthyear;
cout<<"\n\nEnter Your Birth Month(Eg:7):";
cin>>birthmonth;
cout<<"\nEnter The Current Month(Eg:7):";
cin>>currentmonth;
cout<<"\nEnter The Current Year:";
cin>>currentyear;
       
        int ageY,ageM;
 /* Logic for age calculation */
        ageY=currentyear-(birthyear+1);
        ageM=12-birthmonth;
        cout<<"\nYour Age is "<<ageY<<" Years And "<<ageM<<" Months ";
        bmr();
        return 0;
}
