#include <iostream>
using namespace std;

template <class T>
T add(T a, T b){
	return a+b;
}

int main(){
	int var1 = 10;
	int var2 = 20;
	int sum = add<int>(var1,var2);

	cout<<sum<<endl;
}
