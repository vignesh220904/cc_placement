#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    ch = tolower(ch); // Convert to lowercase for uniformity

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        cout << "Vowel" << endl;
    else
        cout << "Consonant" << endl;

    return 0;
}
