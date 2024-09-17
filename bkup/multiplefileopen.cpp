#include <iostream>
#include <fstream>


int main(){

	std::ofstream file1("output.txt", std::ios::app);
	std::ofstream file2("output.txt", std::ios::app);

	if (file1.is_open() && file2.is_open()) {
	    std::cout << "Both threads have opened the file." << std::endl;
	}
	else{
		std::cout<<"Both Threads can't open the file"<<std::endl;
	}
	return 0;
}
