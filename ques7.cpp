#include<iostream>
using namespace std;
int main(){
//hollow diamond
int n;
cout<<"enter a number:";
cin>>n;

int a = n*2-1;
int nsp = n-1;
int nsp2 = 0;

for(int i = 1; i<=a; i++){
    for(int j = 1; j<=nsp; j++){
     cout<<" ";
    }
    for(int j = 1; j<=1; j++){
        cout<<"*";
       }
    for(int j = 1; j<=nsp2; j++){
        cout<<" ";
       }
      for(int j = 1; j<=1; j++){
        if(i==1 || i == a) continue;
        cout<<"*";
       }
    cout<<endl;
  if(i>=n){
    nsp++;
    nsp2-=2;
  }
  else {
    nsp--;
    nsp2+=2;
  }
    
}





}