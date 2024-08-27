#include <iostream>
using namespace std;


int main(){
	int n = 0;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int z=0;z<n-i;z++){
			cout<<' ';
		}
		for(int j=0;j<=2*i;j++){
			cout<<'*';
		}	
		cout<<endl;
	}
	
	return 0;

}

