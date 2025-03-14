#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int a = 0, b = 1, next;
    cout << "Fibonacci Series: " << a << " " << b << " ";

    for (int i = 2; i < n; i++) {
        next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }

    cout << endl;
    return 0;
}
