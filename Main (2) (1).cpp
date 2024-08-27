#include <iostream>
using namespace std;

int main() {
    int first_number, second_number, sum;

    cout << "Enter two integers: ";
    
    cin >> first_number >> second_number;
    
    sum = first_number + second_number;

    // Print sum
    cout << first_number << " + " << second_number << " = " << sum << endl;

    return 0;
}