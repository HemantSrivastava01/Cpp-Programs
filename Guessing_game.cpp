//Guessing Game
#include<iostream>
using namespace std;
main()
{
	int hostUserNum, guestUserNum;
	cout<<"Host, enter the number : ";
	cin>>hostUserNum;
	system("cls");
	cout<<"Guest, enter the number : ";
	cin>>guestUserNum;
	(hostUserNum==guestUserNum)?cout<<"Correct Guess!":cout<<"Incorrect Guess!";
}
