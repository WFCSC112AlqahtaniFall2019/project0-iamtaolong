#include <iostream>
using namespace std;

int arr(int a[], int n) {

    int currentMax = a[0];
    for (int i = 0; i < n; i++) {
        if (currentMax < a[i]) {
            currentMax = a[i];
        }
    }
    return currentMax;
}


int main() {

    int *A;
    int n;

    cout << "Enter the size: " << endl;
    cin >> n;

    A = new int[n];

    cout << "Enter the each elements in your array" << endl;
    for (int i; i < n; i++) {
        cin >> A[i];
    }


    cout << "largest element is : " << arr(A,n) << endl;

    delete A;
    return 0;

}

