// Count the prime numbers between 1 and n

#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 0;

    cout << "Enter number: ";
    cin >> n;

    for(int i = 2; i <= n; i++) {
        bool isPrime = true;

        for(int j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if(isPrime) {
            count++;
        }
    }

    cout << "Total prime numbers = " << count << endl;

    return 0;
}
