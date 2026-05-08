//wa func with default argument and calling it with or without parameter
#include<iostream>
using namespace std;
int add(int a=3, int b=4){
    cout<<a+b;
}
int main(){
    add();
    int a,b;
    cin>>a>>b;
    add(a,b);
}