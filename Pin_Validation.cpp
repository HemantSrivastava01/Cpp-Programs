#include<iostream>
using namespace std;
main()
{
	int userPin=1234, pin, errorCount;
	do
	{
		cout<<"Pin : ";
		cin>>pin;
		if(pin!=userPin)
		{
			errorCount++;
		}
	}while(errorCount<3 &&  pin!=userPin);
	if(errorCount<3)
	{
		cout<<"Login Succesful! Loading...";
	}
	else
	{
		cout<<"Maximum Attempt Reached! Account Blocked...";
	}
}
