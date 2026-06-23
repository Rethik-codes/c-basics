#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"enter ur name "<<endl;
    cin>>name;
    int count;
    cout<<"total characters in name = "<<name.length()<<endl;
    for(int i=0 ; i<name.length() ; i++)
    {
        if(name[i]=='a' || name[i] =='e' || name[i]=='i' || name[i]=='o' || name[i]=='u')
        {
            count++;
        }
    }
    cout<<"total vowels = "<<count;
}