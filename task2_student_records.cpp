#include <iostream>
#include <string>
using namespace std;

int main() {
    const int N = 3;
    string name[N];
    int roll[N];
    float gpa[N];

    for (int i = 0; i < N; i++) {
        cout << "Enter details of student " << i + 1 << endl;
        cout << "Name: ";
        getline(cin >> ws, name[i]);
        cout << "Roll number: ";
        cin >> roll[i];
        cout << "GPA: ";
        cin >> gpa[i];
        cout << endl;
    }

    cout << "----- Student Records -----" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Student " << i + 1 << ": " << name[i]
             << " | Roll No: " << roll[i]
             << " | GPA: " << gpa[i] << endl;
    }
    return 0;
}
