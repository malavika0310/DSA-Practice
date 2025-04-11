#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int num=1;num<=n;num++){
        int factor_sum=0;
        for(int i=1;i<num;i++){
            if(num%i==0){
                factor_sum+=i;
            }
        }
        if(factor_sum==num){
            cout<<num<<" is a perfect number."<<endl;
        }
    }
    return 0;
}