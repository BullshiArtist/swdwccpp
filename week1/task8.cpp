#include <iostream>

using namespace std;

bool even(int number) {
    if(number % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int number;
    bool a;
    cout << "Please enter the number: ";
    cin >> number;
    a = even(number);
    if(a == true) {
        cout << number << " is an even number." << endl;
    } else {
        cout << number << " is an odd number." << endl; 
    }
    return 0;
}
