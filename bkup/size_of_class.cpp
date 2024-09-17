#include <iostream>
using namespace std;

class test1{
	int var1;   //will be 4
		
};			

class test2{
	int x;
	int y;      //will be 8
};

class test3{
	int a;
	double d;   //expecting 16
		   
};

class test4{
	int a;
	double b;
	double c;	//expecting 24 but 32
	char d;
};


class test5{
	int a;
	double b;
	char c;           //expecting 24 but 32
	double d;
};


int main(){
	test1 obj1;
	test2 obj2;
	test3 obj3;
   
	test4 obj4;
	test5 obj5;
	
	cout<<sizeof(obj1)<<endl;
	cout<<sizeof(obj2)<<endl;
	cout<<sizeof(obj3)<<endl;
	
	cout<<sizeof(obj4)<<endl;
	cout<<sizeof(obj5)<<endl;
	return 0;
}
