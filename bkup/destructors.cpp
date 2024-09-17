#include <iostream>
using namespace std;

class student{
	int rollno;
	float marks;
  	
	public:
	    student(int no, float m){
	    	rollno = no;
		marks = m;
	    }

	    void showval(){
	    	cout<<"Roll No: "<<rollno<<endl;
		cout<<"Marks: "<<marks<<endl;
	    
	    }
	    ~student(){
	    	cout<<"Destructor Called"<<endl;
	    }
	
};


int main(){
	student s1(1,90);
	s1.showval();

	return 0;

		

}
