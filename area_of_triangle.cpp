#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    
    float a,b;
    cout << showpoint; 
    cout << fixed;
    cout << setprecision(3);
    cout << "Enter Base and Hight For Area of Triangle: ";
    cin >> a >> b;

    float area = 1/2.0 * (a*b);

    cout << "Area : " << area << endl; 
}