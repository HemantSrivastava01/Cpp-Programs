#include<iostream>
using namespace std;
main()
{
	int num, fact=1;
	cout<<"Number : ";
	cin>>num;
	if(num<=0)
	{
		cout<<"Please enter non zero positive number ";
	}
	else
	{
		for(int i=1;i<=num;i++)
		{
			fact *=i;
		}
		/* for(int i=num; i>=1; i--)
		{
			fact*=i;
		}*/
	}
	cout<<"Factorial of "<<num<<" is : "<<fact;
}
