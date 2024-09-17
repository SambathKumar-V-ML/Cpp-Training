#include <iostream>
#include <algorithm>
using namespace std;


void defsort(int* arr,int size){
		sort(arr,arr+size);
		cout<<"Defaul Sort Function Called"<<endl;

};

void selectionsort(int* arr,int size){
	for(int i=0; i<size ; i++){
		int minaddr = i;
		for(int j=i+1; j<size ; j++){
			if(arr[j]< arr[minaddr]){
				minaddr = j;
			}
		}
		swap(arr[i],arr[minaddr]);
	}
	cout<<"Selection Sort Called"<<endl;
};

int main(){
	int size;
	cin>>size;
	int* arr = new int[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	
	void (*sortFunction)(int*, int);

    	if (size > 5) {
		sortFunction = defsort;  
	} else {
		sortFunction = selectionsort;  
	}


	defsort(arr,size);
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	delete[] arr;
	return 0;
	
}
