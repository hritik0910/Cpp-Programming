#include<iostream>
using namespace std;
int main()
{
int side1,side2,side3;
cin>>side1>>side2>>side3;
if(side1==side2 & side2==side3){
    cout<<"the triangle is equilateral triangle\n";
}
else if(side1==side2||side2==side3||side3==side1){
    cout<<"the triangle is isosceles\n";
}
else{
    cout<<"the triangle is scalene";
}
return 0;
}