#include<iostream>
using namespace std;
int main(){

int n;
cout<<"enter a number: ";
cin>>n;
 int b = n*2-1;
 int nst = 1;
 int nsp = b-2;
for(int i = 1; i<=n-1; i++){
    
    for(int j = 1; j<=nst; j++){
printf("*");
}
    for(int j = 1; j<=nsp; j++){
printf(" ");}

    for(int j = 1; j<=nst; j++){
       
printf("*");}
nst++;
nsp-=2;
cout<<endl;
}
for(int i = 1; i<=2; i++){
    
    for(int j = 1; j<=b; j++){
printf("*");}
cout<<endl;}

for(int i = 1; i<=n-1; i++){
  nst--;
nsp+=2;
    for(int j = 1; j<=nst; j++){
printf("*");
}
    for(int j = 1; j<=nsp; j++){
printf(" ");}

    for(int j = 1; j<=nst; j++){
printf("*");}
cout<<endl;
}
}
