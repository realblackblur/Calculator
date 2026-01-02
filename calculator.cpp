#include <iostream>
using namespace std;

int calculator(int a, int b) {

    char op;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

   if (op == '+'){
    cout << "Sum: " << a + b << endl;

   } else if (op == '-') {
    cout << "Subtraction: " << a - b << endl;

   } else if (op == '*') {
    cout << "Multiplication: " << a * b << endl;

   } else if (op == '/') {
        if (b != 0) {
            cout << "Division: " << a / b << endl;
            cout << "Remainder: " << a % b << endl;
        
            } else {
            cout << "Not Divisible by 0" << endl;
            }

    } else {
    cout << "Invalid Operator" << endl;
    }
    
    return 0;

}

int main () {
    int a, b;
    
    cout << "Enter First No: ";
    cin >> a;

    cout << "Enter Second No: ";
    cin >> b;

    calculator(a, b);

    return 0;
}