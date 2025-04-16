#include<iostream>
using namespace std;
int main(){

int n;
cout<<"enter a number:";
cin>>n;

for(int i = 1; i<=n*2-1; i++){
    cout<<char(i+64)<<" ";
}

cout<<endl;


int b = 1;
for(int i = 1; i<n; i++){
    int a = 1;
    for(int j = 1; j<=n-i; j++){
        cout<<char(a+64)<<" ";
        a++;
       }
    
    for(int j = 1; j<=b; j++){
     cout<<"  ";
     a++;
    }
    b+=2;
  
    for(int j = 1; j<=n-i; j++){
     cout<<char(a+64)<<" ";
     a++;
    }
    cout<<endl;
   
}

}