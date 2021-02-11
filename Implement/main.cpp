/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void age(int birthyear,int birthmonth,int currentmonth,int currentyear)

    {
       

cout<<"\n\n\t\t\tRaje's Age Calculator\n\n";
cout<<"Enter Your Birth Year(Eg:1989):";
cin>>birthyear;
cout<<"\n\nEnter Your Birth Month(Eg:7):";
cin>>birthmonth;
cout<<"\nEnter The Current Month(Eg:7):";
cin>>currentmonth;
cout<<"\nEnter The Current Year(Eg:2010):";
cin>>currentyear;
       
        int agey,agem;
        agey=currentyear-birthyear;
        agem=12-birthmonth;
        cout<<"\n\n\t\tYour Age is "<<agey<<" Years And "<<agem<<" Months ";
        
        
    }
int main()
{
     int birthmonth,birthyear;
int currentmonth,currentyear;
age(birthyear,birthmonth,currentmonth,currentyear);

    return 0;
}
