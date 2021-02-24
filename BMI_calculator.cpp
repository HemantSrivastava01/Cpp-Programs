//BMI calculator
#include<iostream>
using namespace std;
main()
{
	float weight, height, bmi;
	cout<<"Enter your weight in Kgs : ";
	cin>>weight;
	cout<<"Enter your height in Metres : ";
	cin>>height;
	float calHeight=height*height;
	bmi=weight/calHeight;
	if(bmi<18.5){
		cout<<"You are Underweight"<<endl;
	}
	else if(bmi>25){
		cout<<"You are Overweight"<<endl;
	}
	else{
		cout<<"Your weight is Normal"<<endl;
	}
	cout<<"Your BMI is : "<<bmi;
}
