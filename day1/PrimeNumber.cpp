#include <iostream>
using namespace std;

int main() {
    int num, i;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 2)
        isPrime = false;
    else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    cout << (isPrime ? "Prime" : "Not Prime") << endl;
    return 0;
}
