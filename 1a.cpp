//write a cpp prog that takes a positive integer n as an input from the user than calculate its factorial using for loop
#include <iostream>
using namespace std;

int main() {
    int n, fact = 1;
    cout << "Enter number: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    cout << "Factorial = " << fact;
    return 0;
}
//find the fibonacci seq bw 1 to n create a multilication table using for loop