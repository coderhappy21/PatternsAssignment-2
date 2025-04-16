#include<iostream>
using namespace std;
int main(){

int n;
cout<<"enter a number: ";
cin>>n;
 
int a = n*2-1;
for(int i = 1; i<=a; i++){
cout<<"*";
}
cout<<endl;

int nsp = 1;
int nst = n-1;
for(int i = 1; i<=a-2; i++)
{
   for(int i = 1; i<=nst; i++){
    cout<<"*";
    }
for(int i = 1; i<=nsp; i++){
    cout<<" ";
    }
for(int i = 1; i<=nst; i++){
    cout<<"*";
    }
    if(i>=n-1) {nst++;
        nsp-=2;}
        else {
            nst--;
            nsp+=2;
        }
    cout<<endl;
    
}

for(int i = 1; i<=a; i++){
    cout<<"*";
    }
}