#include<iostream>
using namespace std;
int main()
{
    char c;
    int islowervovel ,isuppervovel;
    cout<<"enter the alphabet\n";
    cin>>c;
    islowervovel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    isuppervovel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(islowervovel||isuppervovel){
        cout<<"the alphabet is vovel\n";
    }
    else{
        cout<<"the alphabet is consonant\n";
    }
    return 0;
}
