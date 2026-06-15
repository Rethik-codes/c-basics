#include<iostream>
using namespace std;
int main()
{
	int age=20;
	float height = 6.988555;
	char grade = 'a';
	bool isstudent = false;
	double marks=5.438423842345234576547234;
	string name ="rethik";
	cout<<"my name is = "<<name<<endl;
	cout<<"age = "<<age <<endl;
	cout<<"height = "<<height<<endl;
	cout<<"grade = "<<grade<<endl;
	cout<<"isstudent = "<< boolalpha << isstudent <<endl;
	cout<<"marks = "<<marks<<endl;
}
// int to store integer value
// float to store decimal values upto 4 bytes low accuracy than double
/* double also to store value but upto 8 bytes high accuracy and 
occupies more storage in ram*/
//char is to store character
//bool is to tell true or false
/* for bool if u want true or false as output then u have
to add boolalpha as shown above after cout*/     
//string is store words or even scentences