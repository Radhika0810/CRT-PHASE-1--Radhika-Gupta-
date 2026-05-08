//wa function that takes no. of cofee shots return a total no.of coffee if one shot equal to 30 ml
#include<iostream>
using namespace std;
int coffee(int a){
    return a*30;
}
int main(){
    int a;
    cout<<"No. of coffee shots:";
    cin>>a;
    cout<<"Amount of coffee: "<<coffee(a);
}