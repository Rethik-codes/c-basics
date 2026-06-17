#include<iostream>
using namespace std;
int main()
{
    int even =0;
    int odd = 0;
    int arr[5];
    for(int i =0 ; i<5; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<5; i++)
    {
        if(arr[i]%2==0)
        {
            even =even + 1;
        }
        else
        {
            odd = odd + 1;
        }
    }
    cout<<"total even numbers  = "<<even<<endl;
    cout<<"total odd numbers = "<<odd<<endl;
}