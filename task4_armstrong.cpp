#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    if (num < 0) return false;

    int original = num, digits = 0, temp = num;
    if (num == 0) digits = 1;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    int sum = 0;
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += (int)round(pow(digit, digits));
        temp /= 10;
    }
    return sum == original;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number))
        cout << number << " is an Armstrong number." << endl;
    else
        cout << number << " is not an Armstrong number." << endl;
    return 0;
}
