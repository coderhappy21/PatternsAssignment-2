#include<iostream>
using namespace std;
int main(){

    //alphabet pyramid
int n;
cout<<"enter a number:";
cin>>n;

int a = 1;
int b = n-1;

for(int i = 1; i<=n; i++){
    for(int j = 1; j<=b; j++){
     cout<<"  ";
    }
    b--;
    for(int j = 1; j<=a; j++){
     cout<<char(j+64)<<" ";
    }
    cout<<endl;
    a+=2;
}

}