#include<iostream>

using namespace std;

int main() {

    int n;

    cin >> n;
    int startTime[n], endTime[n], queryTime;
    for (int i = 0; i < n; i++) {
        cin >> startTime[i] >> endTime[i];
    }
    cin >> queryTime;
    int count = 0;
    for (int i = 0; i < n; i++)
        for (int j = startTime[i]; j <= endTime[j]; j++)
            if (queryTime == j)
                count++;

    cout << count;
}