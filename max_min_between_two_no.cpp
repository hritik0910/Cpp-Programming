#include<iostream>
using namespace std;
int main()
{
  int a,b;
  int max ,min;
  max=0;
  min=0;
  cin>>a>>b;
  if(a>b){
      max=a;
      min=b;
  }
  else{
      max=b;
      min=a;
  }
cout<<"max="<<max<<endl;
cout<<"min="<<min<<endl;
}
