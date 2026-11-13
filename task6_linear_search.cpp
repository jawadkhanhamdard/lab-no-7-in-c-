#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    const int SIZE = 10;
    int arr[SIZE];

    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int key;
    cout << "Enter the value to search: ";
    cin >> key;

    int index = linearSearch(arr, SIZE, key);
    if (index != -1)
        cout << key << " found at index " << index << " (position " << index + 1 << ")." << endl;
    else
        cout << key << " was not found in the array." << endl;
    return 0;
}
