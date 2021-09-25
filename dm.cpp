#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    
    for(int num=a;num<=b;num++){
        if(1<=num<10){
            if(num==1){
                cout<<"one"<<endl;
            }
            if(num==2){
                cout<<"two"<<endl;
            }
            if(num==3){
                cout<<"three"<<endl;
            }
            if(num==4){
                cout<<"four"<<endl;
            }
            if(num==5){
                cout<<"five"<<endl;
            }
            if(num==6){
                cout<<"six"<<endl;
            }
            if(num==7){
                cout<<"sevem"<<endl;
            }
            if(num==8){
                cout<<"eight"<<endl;
            }
            if(num==9){
                cout<<"nine"<<endl;
            }
            if(num>=10){
              if(num%2==0){
                cout<<"even"<<endl;
            }
                else{
                cout<<"odd"<<endl;
        }
         
            }
        }
        
    }
    return 0;
}
