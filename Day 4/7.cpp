//waf that takes len and width as an input return and print the area of rect 
#include<iostream>
using namespace std;
int area(int w, int l){
    return w*l;
}
int main(){
    int w,l;
    cout<<"Length of the rect:";
    cin>>l;
    cout<<"Width of the rect:";
    cin>>w;
    cout<<"The are is:"<<area(w,l);
}