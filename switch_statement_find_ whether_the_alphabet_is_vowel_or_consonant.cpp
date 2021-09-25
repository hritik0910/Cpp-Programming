#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter the alphabet which you want to see whether it is a vowel or consonant"<<endl;
    cin>>a;
    switch (a)
    {
    case "a":
        cout<<"it is a vowel\n";
        break;
         case "e":
        cout<<"it is a vowel\n";
        break;
         case "i":
        cout<<"it is a vowel\n";
        break;
         case "o":
        cout<<"it is a vowel\n";
        break;
        case "u":
        cout<<"it is a vowel\n";
        break;
    
    default:
     cout<<"it is a consonant\n";
        break;
    }
}