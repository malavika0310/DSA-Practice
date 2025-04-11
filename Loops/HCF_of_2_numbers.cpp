#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cin>>num1>>num2;
    int smaller_num;
    if(num1<num2){
        smaller_num=num1;
    }else{
        smaller_num=num2;
    }
    int hcf;
    for(int i=1;i<=smaller_num;i++){
        if(num1%i==0 && num2%i==0){
            hcf=i;
        }
    }
    cout<<hcf;
    return 0;
}