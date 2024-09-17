#include <iostream>
#include <cstring>
using namespace std;

int main(){

	char dest[]= "Hello";
	
	char source[] = "sanjay";

	cout<<source<<endl;
	
	cout<<"Size of destination: "<<sizeof(dest)<<" "<<dest<<endl;
	cout<<"Size of source: "<<sizeof(source)<<" "<<source<<endl;
	strcpy(dest,source);

	cout<<"Size of destination: "<<sizeof(dest)<<" "<<dest<<endl;
	cout<<"Size of source: "<<sizeof(source)<<" "<<source<<endl;
	

	if (dest[6]=='\0'){
		cout<<"Null Terminated"<<endl;
	}
	return 0;
}



//When you use strcpy(dest, source);, the function attempts to copy all 7 characters from source into dest, which only has room for 6 characters. This leads to an overflow, where the null terminator from source is written outside the bounds of dest. This can corrupt adjacent memory and cause undefined behavior, potentially leading to crashes, security vulnerabilities, or incorrect program behavior.

