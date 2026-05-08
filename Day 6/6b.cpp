#include<iostream>
using namespace std;
class Reg{
    private:
    int reg_no=100;
    public:
    string name;
    int rollno;
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Roll no:"<<rollno<<endl;
        cout<<"Reg no:"<<reg_no<<endl;
        reg_no++;
    }
};
int main(){
    Reg r1;
    r1.name="radhika";
    r1.rollno=23;
    r1.display();
     r1.name="radhika";
    r1.rollno=23;
    r1.display();
    return 0;
}
