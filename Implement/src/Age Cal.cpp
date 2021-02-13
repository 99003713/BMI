#include <iostream>

using namespace std;

void age(int birthyear,int birthmonth,int currentmonth,int currentyear)

    {
       

cout<<"\n\tAge Calculator\n";
cout<<"Enter Your Birth Year:";
cin>>birthyear;
cout<<"\n\nEnter Your Birth Month(Eg:7):";
cin>>birthmonth;
cout<<"\nEnter The Current Month(Eg:7):";
cin>>currentmonth;
cout<<"\nEnter The Current Year:";
cin>>currentyear;
       
        int ageY,ageM;
        ageY=currentyear-(birthyear+1);
        ageM=12-birthmonth;
        cout<<"\nYour Age is "<<ageY<<" Years And "<<ageM<<" Months ";
        
        
    }
int main()
{
     int birthmonth,birthyear;
int currentmonth,currentyear;
age(birthyear,birthmonth,currentmonth,currentyear);

    return 0;
}
