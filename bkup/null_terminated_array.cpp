#include <iostream>
using namespace std;


int isnullterminated(char arr[],int size){
	for(int i=0; i<size; i++){
		if (arr[i] == '\0'){
			cout<<"Null Terminated"<<endl;
			return 0;
		}
	}
	cout<<"Not Null Terminated"<<endl;
	return 0;
}

int main(){
	char arr[6] = {'R','a','n','d','o','\0'};
	
	char ar2[5] = {'H','e','l','l','o'};


	cout<<arr<<endl;

	isnullterminated(arr,sizeof(arr));
	
	return 0;
}


