#include<iostream>
using namespace std;
main()
{
	int number;
	cout<<"enter the number : ";
	cin>>number;
	if(number==0)
	{
		cout<<"Please enter non zero digit";
	}
	else
	{
		if(number<0)
		{
			number=-1*number;
		}
		int counter=0;
		while(number>0)
		{
			number/=10;
			counter++;
		}
		cout<<"Number contains "<<counter<<" digits";
	}
}
