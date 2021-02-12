#include <iostream>
using namespace std; 
int bmr()
{
    string name;
	char gender;
	int weight,height,age,BMR;
	
	cout << "\n****************************************\n"
         << "            Basal Metabolic Ratio"
         << "\n****************************************\n";
	
	cout<<"Enter your Name:"<<endl;
	cin>>name;
	cout<<"Enter your Weight(in Kgs):"<<endl;
	cin>>weight;
	cout<<"Enter your Height(ib Cms):"<<endl;
	cin>>height;
	cout<<"Enter your Age:"<<endl;
	cin>>age;
	cout<<"Enter your Gender:"<<endl;
	cin>>gender;

if(gender=='M'||gender=='m')
	{
		BMR=66.47+(13.75*weight)+(5.00*height)-(6.75*age);
		cout<<name<<" has a "<<BMR<<" amount of Calories"<<endl;
	}
	else if (gender =='F'||gender=='f')
	{
		BMR=655.1+(9.56*weight)+(1.85*height)-(4.67*age);
		cout<<name<<" has a "<<BMR<<" amout of Calories"<<endl;
	}
    else
    {
    	cout<<"Gender not Found"<<endl;
    }
	return 0;
}
