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

void recc(student* array, int n){
        
	if(n<=0){
		return ;
	}
	array[n-1].getval();             
        recc(array, n-1);

};

int main(){
	cout<<"Size of class: "<<sizeof(student)<<endl;
        student arr[5];
	cout<<"Size of arr: "<<sizeof(arr)<<endl;
	recc(arr,5);
        return 0;

}
