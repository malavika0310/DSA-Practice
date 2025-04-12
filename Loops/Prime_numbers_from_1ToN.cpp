#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int num=1;num<=n;num++){
        if(num>1){
            int flag=0;
            for(int i=2;i<num;i++){
                if(num%i==0){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                cout<<num<<" ";
            }
        }
    }
    return 0;
}