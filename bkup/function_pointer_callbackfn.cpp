#include <iostream>
using namespace std;

int process1(int &data) {
    cin >> data;
    return data;
}

void process2(int (*funptr)(int&)) {
    int data;
    funptr(data);  // Calling the fn using the fn ptr
    cout << data << endl;
}

int main() {
    process2(process1);
    return 0;
}

