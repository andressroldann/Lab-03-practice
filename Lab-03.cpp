#include <iostream>
using namespace std;

void getDayName(int day) {
    switch (day) {
    case 1:
        cout << "Sunday";
        break;
    case 2:
        cout << "Monday";
        break;
    case 3:
        cout << "Tuesday";
        break;
    case 4:
        cout << "Wednesday";
        break;
    case 5:
        cout << "Thursday";
        break;
    case 6:
        cout << "Friday";
        break;
    case 7:
        cout << "Saturday";
        break;
    default:
    cout << "Invalid number";
    }
}

int main() {
    // Test cases
    cout << "Test case 1 (Input: 1): ";
    getDayName(1);
    
    cout << "Test case 2 (Input: 4): ";
    getDayName(4);
    
    cout << "Test case 3 (Input: 7): ";
    getDayName(7);
    
    cout << "Test case 4 (Input: 0): ";
    getDayName(0);
    
    cout << "Test case 5 (Input: 10): ";
    getDayName(10);

    return 0;
}