#include <iostream>

using namespace std;

int main() {
    
    int n, reversedNumber = 0, remainder;

    n = 123456789;

    while (n != 0) {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }

    cout << "Reversed Number = " << reversedNumber;

    return 0;
}