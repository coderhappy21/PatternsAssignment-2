#include<iostream>
using namespace std;
int main(){

int n;
cout<<"enter a number:";
cin>>n;

int a = n*2+1;
int ml = n+1;
for(int i = 1; i<=a; i++){
    for(int j = 1; j<=a; j++){
        if(i == ml || j == ml ||  i-j == n ||j -i == n || i+j == ml+1 || i+j == a+ml)
        cout<<"*";
        else cout<<" ";
       }
    cout<<endl;
    
    
}





}