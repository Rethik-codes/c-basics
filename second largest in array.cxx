#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {1,5,3,4,2};
    int largest = arr[0];
    int secondlargest=-1;
    for(int i=1; i<5 ;i++)
    {
        if(arr[i] > largest)
        {
            secondlargest =largest;
            largest = arr[i];
        }
        else if(arr[i] > secondlargest && arr[i]< largest)
        {
            secondlargest = arr[i];
        }
    }
    cout<<"largest = "<<largest<<endl;
    cout<<"second largest = "<<secondlargest;
}