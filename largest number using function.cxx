#include<iostream>
using namespace std;
void largest(int a , int b)
{
    if(a>b)
    {
        cout<<a<<" is greater than "<<b<<endl;
    }
    else
    {
        cout<<b<<" is greater than "<<a<<endl;
    }
}
int main()
{
    largest(4,100);
    largest(6,9);
    largest(6,7);
}