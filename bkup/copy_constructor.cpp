#include <iostream>
using namespace std;

//Shallow copy

class test{
	int* ptr;

	public:
	test(int x){
		ptr = new int(x);
	
	}
	void showval(){
		cout<<*ptr<<endl;
	}
	void modifyval(int y){
		*ptr = y;
	}


};

int main(){
	test testobj(20);
	testobj.showval();
	
	test copyobj = testobj;
	copyobj.showval();
	
	testobj.modifyval(30);
	
	cout<<"After Modification of testobj 1"<<endl;
	
	testobj.showval();
	copyobj.showval();
	return 0;

}
