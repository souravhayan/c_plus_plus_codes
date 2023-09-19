#include<iostream>
using namespace std;

int main(){
    float F,C;
    cout << "Enter fahrenheit to convert into celsius: ";
    cin >> F;

    C = (F-32)/1.8;

    cout << "In celsius: " << C << endl;

}
