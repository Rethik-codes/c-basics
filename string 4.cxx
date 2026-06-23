#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"enter a name "<<endl;
    cin>>name;
    cout<<"total characters = "<<name.length()<<endl;
    for(int i =0; i<name.length() ; i++)
    {
        cout<<name[i]<<endl;
    }
}