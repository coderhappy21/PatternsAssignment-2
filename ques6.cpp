#include<iostream>
using namespace std;
int main(){
//star Y
int n;
cout<<"enter a number:";
cin>>n;

int nsp = 1;
int nsp2 = n*2-1;

for(int i = 1; i<=n; i++){
   
    for(int j = 1; j<=nsp; j++){
     cout<<" ";
    }
    if(i==n){ 
    cout<<" *";
        break;}
    for(int j = 1; j<=1; j++){
        cout<<"*";
       }
     
    for(int j = 1; j<=nsp2; j++){
        cout<<" ";
       }
      for(int j = 1; j<=1; j++){
        cout<<"*";
       }
       nsp++;
       nsp2-=2;
    cout<<endl;
    
}





}