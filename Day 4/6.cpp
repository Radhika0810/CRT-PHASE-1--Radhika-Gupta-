//waf that apply 10percent discount using references update the original bill amount  and print it
#include<iostream>
using namespace std;
int disc(double &a){
    a=a-(a/10);}
    int main(){
        double a= 500.50;
        cout<<a<<endl;
        disc(a);
        cout<<a<<endl;
    }
