#include <iostream>

using namespace std;

int main() {
    int number;
    int sum = 0;

    do {
        cout << "Enter a number (enter a negative number to stop): ";
        cin >> number;

        // Add the number to the sum if it's not negative
        if (number >= 0) {
            sum += number;
        }

    } while (number >= 0);

    cout << "Sum of the entered numbers: " << sum << endl;

    return 0;
}

