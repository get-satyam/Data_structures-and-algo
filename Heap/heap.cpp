#include<bits/stdc++.h>



using namespace std;

void maxHeapify(vector < int > & A, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    while (left < n && A[left] > A[largest])
        largest = left;

    while (right < n && A[right] > A[largest])
        largest = right;

    if (largest != i) {
        swap(A[i], A[largest]);
        maxHeapify(A, n, largest);
    }

}
void heapsort(vector < int > & A, int n) {

    //To create the Binary Heap
    for (int i = n / 2 - 1; i >= 0; i--) {
        maxHeapify(A, n, i);
    }

    //To delete the Binary heap

    for (int i = n - 1; i >= 0; i--) {
        swap(A[0], A[i]);
        maxHeapify(A, i, 0);
    }


}

int main() {

    vector < int > A {
        2,
        5,
        6,
        4,
        10,
        11,
        34
    };
    int n = A.size();

    heapsort(A, n);

    for (auto i: A)
        cout << i << " ";

    return 0;

}
