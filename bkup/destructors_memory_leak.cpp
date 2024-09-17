#include <iostream>
using namespace std;


class test{
 	int* ptr;

	public:
	test(int x){
	     ptr = new int(x);
	
	}

//	~test(){
//	     delete ptr;
//      	     cout<<"No memory Leak"<<endl;	     
//	}	


};



int main(){
	
	test testobj(10);
	return 0;

}
