#include<iostream>
using namespace std;
class Area{
    public:
    int length;
    int width;
    Area(){
        length = 0;
        width=0;
    }
    Area(int length, int w){
        this->length=length;
        width=w;
    }
    Area(int s){
        length=s;
        width=s;
    }
    void Display(){

    }
}
//wacppp to create a student management system where we store and display a students display   name, roll no, reg no, email id, phone no, marks using peremetrized and default const
