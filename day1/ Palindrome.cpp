#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0, original, remainder;
    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while (num > 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    cout << (original == reversed ? "Palindrome" : "Not Palindrome") << endl;
    return 0;
}
