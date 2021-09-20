#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter the Year for Checking it is Leap year or not "<<endl;
	cin>>year;
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
			{
				cout<<"it is Leap Year"<<endl;
			}
			else
			{
				cout<<"It is not Leap year"<<endl;
			}
		}
		else
		{
			cout<<"it is Leap Year"<<endl;
		}
		
	}
	else{
		cout<<"it is not Leap Year "<<endl;
	}
	return 0;
}
