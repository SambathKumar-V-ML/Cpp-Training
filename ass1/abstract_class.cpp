#include <iostream>
using namespace std;


class base{
	public:
	virtual void showval() = 0;
};

class derived: public base{
	int member;
	
	public:
	derived(int x){
		member = x;
	}

	void showval(){
		cout<<"Member value: "<<member<<endl;
	}

};


int main(){
	cout<<"Size of Base class: "<<sizeof(base)<<endl;
	cout<<"Size of derived class: "<<sizeof(derived)<<endl;
	
	derived obj(10);
	obj.showval();
	return 0;

}
