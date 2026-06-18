#include<iostream>
using namespace std;
int largest(int a , int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    cout<<largest(6,9)<<endl;
    cout<<largest(6,7)<<endl;
}