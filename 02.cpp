#include <iostream>
using namespace std;

int main() {
    // taking variables
    int size, posCount = 0, negCount = 0;
    cout << "Enter number of elements: ";
    cin >> size;

    int arr[size];
    int positiveCount = 0, negativeCount = 0;
    cout << "Enter integers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    //counting
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0)
            posCount++;
        else if (arr[i] < 0)
            negCount++;
    }
    cout << " Total no of positive numbers: " << posCount << endl;
    cout << " Total no of negative numbers: " << negCount << endl;

    return 0;
}