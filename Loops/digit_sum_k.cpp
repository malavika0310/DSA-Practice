#include<iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int count=0;
    for(int num=1;count<n;num++){
        int sum=0;
        for(int i=num;i>0;i/=10){
            sum+=i%10;
        }
        if(sum==k){
            cout<<"Sum of "<<num<<": "<<k<<endl;
            count+=1;
        }
    }
    return 0;
}