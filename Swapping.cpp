//program for swapping values between two variables using 3rd variable
#include<iostream>
using namespace std;
main(){
	int a,b;
	cout<<"enter value of a : ";
	cin>>a;
	cout<<"enter value of b : ";
	cin>>b;
	cout<<"values of a & b before swapping is : "<<a<<","<<b<<endl;
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"values of a & b after swapping is : "<<a<<","<<b<<endl;
	}
