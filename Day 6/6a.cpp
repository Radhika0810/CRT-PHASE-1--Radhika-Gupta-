#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rollno;
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Roll no:"<<rollno<<endl;
    }
};
int main(){
    Student s1;
    s1.name="Radhika";
    s1.rollno=0423;
    s1.display();
    return 0;
}