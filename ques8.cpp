#include<iostream>
using namespace std;
int main(){

int n;
cout<<"enter a number:";
cin>>n;

int a = 1;
int b = n;
int b2 = 0;

for(int i = 1; i<=n; i++){
    for(int j = 1; j<=b; j++){
     cout<<" ";
    }
    b--;
    for(int j = 1; j<=1; j++){
        cout<<a;
       }
    for(int j = 1; j<=b2; j++){
        cout<<" ";
       }
       b2+=2;
      for(int j = 1; j<=1; j++){
        if(i==1) continue;
        cout<<a;
       }
    cout<<endl;
    a++;
    
}





}