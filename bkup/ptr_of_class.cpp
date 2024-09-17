#include <iostream>
using namespace std;

class test{
	int mem;

	public:
	test(int x){	
		cout<<"Constructor Invoked"<<endl;
		mem = x;
	
	}



};


int main(){
	test* ptr;
	cout<<"ptr created: "<<ptr<<endl;
	ptr = new test(10);
	cout<<"ptr holding obj: "<<ptr<<endl;
	return 0;	

}
