#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    float num1,num2;

    cout << showpoint;
    cout << fixed;
    cout << setprecision(2);
    

    cout << "Enter Two Numbers: ";
    cin >> num1 >> num2;

    float sum = num1 + num2;
    cout << setw(20) << "Sum = " << sum << endl;

    float sub = num1 - num2;
    cout << setw(20) << "Subtraction = " << sub << endl;

    float mul = num1 * num2;
    cout << setw(20) << "Multiplication = " << mul << endl;

    float div = (float) num1 / num2;
    cout << setw(20) << "Division = " << div << endl;

    //int rem = num1 % num2;
    //cout << "Reminder = " << rem << endl;

}