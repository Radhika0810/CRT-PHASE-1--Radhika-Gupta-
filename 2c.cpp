#include<iostream>
using namespace std;
int main(){
    int i , j, k, c;
    cin>>c;
    for(i=1; i<=c; i++){
        for (k=c; k>i; k--){
            cout<<" ";}
        for(j=1;j<=i; j++){
cout<<"*";}
cout<<"\n";}
  return 0;
}