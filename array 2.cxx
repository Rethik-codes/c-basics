#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int sum=0;
    for(int i =0 ; i<=4 ; i++)
    {
        cin>>arr[i];
    }
    for(int i =0 ; i<=4 ; i++)
    {
        sum = sum + arr[i];
    }
    cout<<"sum = "<<sum;
}
    