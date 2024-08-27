#include <iostream>
using namespace std;

class student{
        int rollno;
        static int rollnocount;

        public:
        student(){
                rollno = ++rollnocount;
        }

        void getval(){
                cout<<"Roll No: "<<rollno<<endl;
        }
};

int student::rollnocount = 0;

int main(){

        student arr[5];
        for(int i = 0; i < 5; i++) {
                arr[i].getval();             //change the loop to recursion
        }
        return 0;

}
