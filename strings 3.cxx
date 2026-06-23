#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"enter your name"<<endl;
    cin>>name;

    cout<<name[0]<<endl;
    cout<<name[1]<<endl;
    cout<<name[name.length()-1];
}