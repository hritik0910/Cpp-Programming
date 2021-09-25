#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the table you want to print ";
    cin>>a;
    cout<<" this is a table of "<<a<<endl;
    int i;
    i=1;
    while(i<=10){
        cout<<a<<""<<"x"<<""<<i<<""<<"="<<i*a<<endl;
    i++;
    }
}