#include<iostream>
using namespace std;
class Student{
    public:
    int 
    Student(){
        name="Radhika";
        rollno =10;
    }
    void show(){
        cout<<"Name:"<<name<<endl;
        cout<<"Roll no:"<<rollno<<endl;
        cout<<"Default constructor is called"<<endl;
    }
};
int main(){
    Student s1;
    s1.show();
}