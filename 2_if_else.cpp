#include <iostream>
using namespace std;

int main() {

    cout << "Enter a number to check if it's an even or an odd.\nPress '0' to quit.\n";
    int number;

    while (true) {
        cout << "Number: ";
        cin >> number; // Take input from the user inside the loop

        if (number == 0) {
            break; // Exit the loop when the user enters 0
        } else if (number % 2 == 0) {
            cout << "Even" << endl;
        } else {
            cout << "Odd" << endl;
        }
    }

    return 0;
}
