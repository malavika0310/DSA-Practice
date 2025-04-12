#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;

    if(num<=1){
        cout<<"Not a Prime Number";
    }
    
    else{
        int factor_count=0;
        for(int i=1;i<=num;i++){
            if(num%i==0){
                factor_count+=1;
            }
        }
        if(factor_count==2){
            cout<<"Prime Number";
        }
        else{
            cout<<"Not a Prime Number";
        }
    }
    return 0;
}