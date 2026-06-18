#include<iostream>
using namespace std;
void evenodd(int n)
{
    if(n%2==0)
    {
        cout<<n<<" is even"<<endl;
    }
    else
    {
        cout<<n<<" is odd"<<endl;
    }
}
int main()
{
        evenodd(7);
        evenodd(8);
        evenodd(9);
        evenodd(10);
}
        