#include <iostream>
#include <string>

using namespace std;

int main() {
    string gender;
    int age;
    cout << "Please enter your gender: ";
    cin >> gender;
    if (gender == "Male" || gender == "male" || gender == "Man" || gender == "man") {
        cout << "Please enter your age: ";
        cin >> age;
        switch (age) {
            case 25:
            case 42:
            case 61:
                cout << "You are in unlucky years." << endl;
                break;
            default:
                cout << "You are not in unlucky years."  << endl;
                break;
        }
    } else if (gender == "Female" || gender == "female" || gender == "Woman" || gender == "woman") {
        cout << "Please enter your age: ";
        cin >> age;
        switch (age) {
            case 19:
            case 33:
            case 37:
                cout << "You are in unlucky years." << endl;
                break;
            default:
                cout << "You are not in unlucky years." << endl;
                break;
        }
    } else {
        cout << "There is no unlucky years for Non-binary in Japan." << endl;
    }
}