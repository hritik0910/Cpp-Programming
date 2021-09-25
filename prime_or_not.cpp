#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no. Which you want to find whether the no. is prime or not"<<endl;
    cin>> n;
    int i;
    for(i=2;i<n;i++)
    {
     if(n%i==0){
         cout<<"the no. is not prime"<<endl;
        break;     
     }
     
    }
    if(n==i){
        cout<<"the no is prime"<<endl;
    }
    return 0;
}
