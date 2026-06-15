#include<iostream>
using namespace std;
int main()
{
    string name;
    int age;
    string fullname;
    cout<<"enter your name = ";
    cin>>name;
    cout<<"enter your age = ";
    cin>>age;
    cout<<"your name is "<<name<<" your age is "<<age<<endl;
    cin.ignore();
    cout<<"enter your full name = ";
    getline(cin,fullname);
    cout<<"your full name is ="<<fullname;
}
//cin means taking input from the user
//cout means displaying the output on the screen 
//std cin and std cout came from the iostream library
// << means send data to output
// >> means take data from input 
/* when the user press enter after writing his age
then the getline(cin,fullname) thinks that the user has 
already pressed the enter becoz it works instantly
thats y we have to use cin.ignore() so that the
getline(cin,fullname) will wait for the user input
hence cin.ignore() is important*/
/*if u have doubt u can remove the cin.ignore() 
and check the output*/ 