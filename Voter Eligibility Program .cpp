//Voter Eligibility Program
#include <iostream>
using namespace std;
int main(){
	int age;
	cout<<"Please Enter Your Age Here:)"<<endl;
	cin>>age;
	if (age>=18){
		cout<<"Congradulations, You are Eligible to Vote"<<endl;
	}
	else if(age>=0&age<18)
	{
		cout<<"Sorry, Not Eligible to Vote"<<endl;
	}
	return 0;
}