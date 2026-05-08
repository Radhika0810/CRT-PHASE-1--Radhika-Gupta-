#include<iostream>
using namespace std;
class Area{
    public:
    int s, l, b;
    float r;

    Area(){

    }

    Area(int side){
s=side;

    }

    Area(int length, int breadth){
        l=length;
        b=breadth;
    }
    
    Area(float radius){

    }
}