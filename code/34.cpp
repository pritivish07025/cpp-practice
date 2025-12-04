#include <iostream>
using namespace std;

// Function to calculate sum and product
void SumAndProduct(int arr[], int n, int &sum, int &product) {
    sum = 0;
    product = 1;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        product *= arr[i];
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum, product;

    // Function call
    SumAndProduct(arr, n, sum, product);

    cout << "Sum = " << sum << endl;
    cout << "Product = " << product << endl;

    return 0;
}
