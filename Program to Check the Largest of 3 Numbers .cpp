//Program to Check the Largest of 3 Numbers
#include <iostream>
using namespace std;
int main(){
	int num1,num2,num3;
	cout<<"Enter Three Numbers"<<endl;
	cin>>num1>>num2>>num3;
	if (num1>num2&num1>num3)
	{
		cout<<"num1is the Largest"<<endl;
	}
	else if(num2>num1&num2>num3)
	{
		cout<<"num2 is the largest"<<endl;
	}
	else
	{
		cout<<"num3 is largest"<<endl;
	}
	return 0;
}