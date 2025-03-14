#include <iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter range (start end): ";
    cin >> start >> end;

    for (int num = start; num <= end; num++) {
        int sum = 0, temp = num, digits = 0;

        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        temp = num;
        while (temp > 0) {
            int rem = temp % 10;
            sum += pow(rem, digits);
            temp /= 10;
        }

        if (sum == num)
            cout << num << " ";
    }
    cout << endl;
    return 0;
}
