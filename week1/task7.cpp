#include <iostream>

using namespace std;

bool even(short number) {
    if (number % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    bool a, b;
    a = even(3);
    b = even(4);
    if (a == true) {
        cout << "Number 3 is an even number." << endl;
    } else {
        cout << "Number 3 is not an even number." << endl;
    }
    if (b == true) {
        cout << "Number 4 is an even number." << endl;
    } else {
        cout << "Number 4 is not an even number." << endl;
    }
    return 0;
}
