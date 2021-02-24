#include<iostream>
using namespace std;
main()
{
	float num1,num2;
	char operation;
	cout<<"enter num1 : ";
	cin>>num1;
	cout<<"enter num2 : ";
	cin>>num2;
	cout<<"enter operation from(- or + or * or /) : ";
	cin>>operation;
	switch(operation){
		case'-':cout<<num1<<operation<<num2<<"="<<num1-num2;break;
		case'+':cout<<num1<<operation<<num2<<"="<<num1+num2;break;
		case'*':cout<<num1<<operation<<num2<<"="<<num1*num2;break;
		case'/':cout<<num1<<operation<<num2<<"="<<num1/num2;break;
		default:cout<<"Not valid operation";
	}
		
}
