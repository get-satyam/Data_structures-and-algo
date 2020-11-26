#include<iostream>

using namespace std;

int main() {
    int x;
    int reverse = 0, remainder;

    while (x != 0) {

        remainder = x % 10;

        if (reverse > INT_MAX / 10 || (reverse == INT_MAX / 10 && remainder > 7))
            return 0;
        if (reverse < INT_MIN / 10 || (reverse == INT_MIN / 10 && remainder < -8))
            return 0;

        reverse = reverse * 10 + remainder;
        x /= 10;
    }
    return reverse;

}
}