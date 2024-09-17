#include <iostream>
#include <string>
using namespace std;

int main(){
        char letter = 'A';
	int ascii = letter;  //implicit typecasting
	cout<<letter<<endl; 
	cout<<sizeof(letter)<<endl;
	cout<<ascii<<endl;
	cout<<static_cast<int>(letter)<<endl;  //explicit typecasting
}
