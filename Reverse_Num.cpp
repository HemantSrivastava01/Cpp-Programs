#include<iostream>
using namespace std;
main()
{
	int num,revNum;
	cout<<"Number : ";
	cin>>num;
	
	while(num!=0)
	{
		revNum *=10;
	//	int lastDig=num%10;
		revNum+=num%10;
		num/=10;
	}
	cout<<"Reversed : "<<revNum;
}
