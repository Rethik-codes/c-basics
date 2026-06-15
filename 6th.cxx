#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f;
    cout<<"enter six numbers randomly"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    cin>>f;
    
    if(a>b)
    {
        cout<<a<<"is greater than "<<b<<endl;
    }
    else if(a<b)
    {
         cout<<a<<"is less than "<<b<<endl;
     }
     else
     {
         cout<<a<<"is equal to "<<b<<endl;
      } 
      if(c==d)
      {
          cout<<c<<"is equal to "<<d<<endl;
      } 
      else
      {
          cout<<c<<"is not equal to "<<d<<endl;
      }
      if(e>=f)
      {
          cout<<e<<"is either greater or equal to "<<f<<endl;
      }
      else
      {
          cout<<e<<"is less than "<<f<<endl;
      }

}