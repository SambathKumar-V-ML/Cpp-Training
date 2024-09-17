#include <iostream>
using namespace std;


int main() {
    int no = 100;
    int* ptr = &no;
    long long int bigint = 200;   

    cout << ptr++ << endl;
    cout << "Int size: " << sizeof(no) << endl;
    cout << "Int pointer size: " << sizeof(ptr) << endl;
    return 0;
}

