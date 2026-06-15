#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two different numbers"<<endl;
    cin>>a>>b;
    if(a>b)
    {
        cout<<a<<" is greater than "<<b;
    }
    else if(b>a)
    {
        cout<<b<<" is greater than "<<a;
    }
    else
    {
        cout<<a<<" and "<<b<<" are equal"<<endl;
    }
}
        