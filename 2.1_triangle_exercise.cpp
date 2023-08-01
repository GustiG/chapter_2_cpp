#include <iostream>
using namespace std;

int main() {
    
    float a, b, c;
    while (true) {

        cout << "Input the triangle's length for A, B, C:\n";

        cin >> a >> b >> c;

        if (a==b && b==c) {
            cout << "Equilateral triangle" << endl;
        }
        else if (a!=b && a!=c && b!=c) {
            cout << "scalene triangle" <<endl;
        }
        else {
            cout << "Isosceles triangle" << endl;
        }
    }
    return 0;
}