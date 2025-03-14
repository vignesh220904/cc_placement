#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int evenSum = 0, oddSum = 0;

    for (int num : arr) {
        if (num % 2 == 0)
            evenSum += num;
        else
            oddSum += num;
    }

    cout << "Sum of Even: " << evenSum << ", Sum of Odd: " << oddSum << endl;
    return 0;
}
