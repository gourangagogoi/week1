#include <iostream>
using namespace std;

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    if (decimal == 0) {
        cout << "Binary: 0" << endl;
        return 0;
    }

    string binary = "";  //to store the binary no.
    while (decimal > 0) {
        // conversion
        int remainder = decimal % 2;
        binary = to_string(remainder) + binary;
        decimal = decimal / 2;
    }

    cout << "Binary: " << binary << endl;
    return 0;
}