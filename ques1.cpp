#include<iostream>
using namespace std;
int main(){

    //number pyramid
int n;
cout<<"enter a number:";
cin>>n;

int a = 1;
int b = n;

for(int i = 1; i<=n; i++){
    for(int j = 1; j<=b; j++){
     cout<<"  ";
    }
    b--;
    for(int j = 1; j<=a; j++){
     cout<<j<<" ";
    }
    cout<<endl;
    a+=2;
}





}