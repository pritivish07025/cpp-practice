//WAP to print all the unique values in an array 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Unique values are:\n";

    for(int i = 0; i < n; i++) {
        bool isUnique = true;

        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        if(isUnique)
            cout << arr[i] << " ";
    }

    return 0;
}
