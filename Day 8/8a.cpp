#include<iostream>
using namespace std;
class ATM{
    private:
    int balance;
    public:
    ATM(int b){
        balance  =b;
    }
    void Withdraw(int amount){
        if(amount> balance){
            cout<<"Insufficient balance"<<endl;
        }
        else{
            balance-=amount;
            cout<<"Amount Withdrawal"<<amount<<endl;
        }
    }
    void ShowBalance(){
        cout<<"Current Balance:"<<balance<<endl;
    }
};
int main(){
    ATM a(5000);
    a.ShowBalance();
    a.Withdraw(500);
    a.ShowBalance();
    return 0;
}