#include <iostream>
using namespace std;

class test{
	int pri;

	protected:
	int pro;

	public:
	test(int x,int y){
		pri = x;
		pro = y;
	}

	void showval(){
		cout<<"Private Member: "<<pri<<endl;
		cout<<"Protected Member: "<<pro<<endl;
		
	}

	friend class ftest;
};

class ftest{
	public:
	
	void showval(test& obj){
		cout<<"Private Member: "<<obj.pri<<endl;
		cout<<"Protected Member: "<<obj.pro<<endl;
		
	}
	
};



int main(){
	test obj(1,2);
	obj.showval();
	ftest fobj;
	fobj.showval(obj);	
	return 0;
}

