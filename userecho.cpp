#include <iostream>
using namespace std;

int main () {
    int x;

    // prompt user for the input
    cout << "Enter an integer: ";

    // get input
    cin >> x;

    // check if the input succeeded
    if (cin.fail()) {
        cout << "That wasn't an integer :/" << endl;
        return -1;
    }

    // print the value
    cout << x << endl;
    return 0;
}
