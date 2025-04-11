#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int stars=1;
    int spaces=n-1;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        if(i<n){
            stars+=2;
            spaces--;
        }else{
            stars-=2;
            spaces++;
        }
        cout<<endl;
    }
    return 0;
}
