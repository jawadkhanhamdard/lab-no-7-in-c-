#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

int main() {
    const int SIZE = 10;
    int arr[SIZE];

    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    bubbleSort(arr, SIZE);

    cout << "Sorted array (ascending): ";
    for (int i = 0; i < SIZE; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
