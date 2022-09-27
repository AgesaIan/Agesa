//Grading System Program
#include<iostream>
using namespace std;
int main(){
	int Math, Eng,Fre,Sci,CRE,avg;
	cout<<"Enter Marks for Five Units"<<endl;
	cin>>Math>>Eng>>Fre>>Sci>>CRE;
	avg=(Math+Eng+Fre+Sci+CRE)/5;
	if(avg>=70&avg<=100)
	{
		cout<<"Grade A"<<endl;
	}
	else if(avg>=60&avg<70)
	{
		cout<<"Grade B"<<endl;
	}
	else if(avg>=50&avg<60)
	{
		cout<<"Grade C"<<endl;
	}
	else if(avg>=40&avg<60)
	{
		cout<<"Grade D"<<endl;
	}
	else if(avg<40&avg>=0)
	{
		cout<<"Grade E, Do Supplementary"<<endl;
	}
	return 0;
}