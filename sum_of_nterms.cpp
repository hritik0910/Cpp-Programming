#include<iostream>
using namespace std;
int main()
{
    cout<<"pls enter the no. till when you want to sum"<<endl;
    int i;
    cin>>i;
     int sum=0;
     for(int a=1;a<=i;a++)
     {
         sum=sum+a;
        
     }
     cout<<"the sum is"<<""<<sum<<endl;
     return 0;
}