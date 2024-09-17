#include <iostream>
using namespace std;

int global;
int* pointer;

int main() {
    int no = 100;
    int* ptr;
    int local;

    cout << "global int: " << global << endl;         // Expected to be 0
    cout << "global pointer: " << pointer << endl;   // Expected to be 0 (nullptr)
    cout << "ptr: " << ptr << endl;                   // Could be a garbage value
    cout << "local: " << local << endl;               // Could be a garbage value

    return 0;
}

