#include<iostream>
using namespace std;
int main(){

int n;
cout<<"enter a number: ";
cin>>n;
 int x = 1;
for(int i = 1; i<=n*2-1; i++){
    cout<<x<<" ";
 if (i >= n) x--;
 else  x++;
}

cout<<endl;


int b = 1;
for(int i = 1; i<n; i++){
    int a = 1;
    for(int j = 1; j<=n-i; j++){
        cout<<a<<" ";
        a++;
       }
    
    for(int j = 1; j<=b; j++){
     cout<<"  ";
    }
    b+=2;
   a = n-i;
    for(int j = 1; j<=n-i; j++){
     cout<<a<<" ";
     a--;
    }
    cout<<endl;
   
}

}