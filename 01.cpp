#include <iostream>
using namespace std;

int main() {
    //declaring the size
    int size;
    cout<<"Enter the size of array";
    cin>>size;
    int arr[size];

    // taking elements
    cout << "Enter integers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Printing
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}