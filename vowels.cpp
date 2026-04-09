#include <iostream>
using namespace std;

int main() {
    int arr[9];  // one number missing from 1-10

    cout << "Enter 9 numbers (1-10 with one missing):\n";
    for(int i = 0; i < 9; i++) {
        cin >> arr[i];
    }

    int total_sum = 10 * 11 / 2;  // 55
    int arr_sum = 0;

    for(int i = 0; i < 9; i++) {
        arr_sum += arr[i];
    }

    int missing = total_sum - arr_sum;

    cout << "Missing number is: " << missing;

    return 0;
}
