#include<iostream>
using namespace std;
main()
{
	float a,b,c;
	cout<<"enter side a : ";
	cin>>a;
	cout<<"enter side b : ";
	cin>>b;
	cout<<"enter side c : ";
	cin>>c;
	if(a==b && b==c){
		cout<<"this is equilateral triangle";
	}
	else if(a!=b && a!=c && b!=c){
		cout<<"scalene triangle";	
	}
	else{
		cout<<"this is isosceles triangle";
	}
}
