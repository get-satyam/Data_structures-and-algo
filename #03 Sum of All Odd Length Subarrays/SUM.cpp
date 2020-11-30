#include<iostream>

using namespace std;

int main() {
    int sum = 0, n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {

        for (int j = i; j < n; j += 2) {

            for (int k = i; k <= j; k++) 
                sum += a[k];          


        }

    }
    cout << sum;
}