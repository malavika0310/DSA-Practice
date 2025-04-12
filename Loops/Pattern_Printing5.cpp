#include<iostream>
using namespace std;

int main(){
    int rows,cols;
    cin>>rows>>cols;
    for(int i=1;i<=rows;i++){
        for(int j=i;j<=cols+i-1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}