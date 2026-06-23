#include<iostream>
using namespace std;
int sum(int arr[] , int size)
{
    int summation = 0;
    for(int i =0 ; i<size ; i++)
    {
        summation =summation + arr[i];
    }
    return summation;
}
int main()
{
        int array[5] = {10,20,30,40,50};
        cout<<sum(array , 5);
}
        