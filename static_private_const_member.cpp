#include <iostream>
using namespace std;

class Student {
	private:
    		string name;
    		int grade;
    		static int studentCount; 

    		// Private member function 
    		bool isValidGrade(int g) {
        		return (g >= 0 && g <= 10);
    		}

	public:
    		Student(string n, int g) {
        	name = n;
        	if (isValidGrade(g)) {
            		grade = g;
        	}
	       	else {
            		grade = 0; 
            		cout << "Invalid grade for " << name << endl;
        	}
        	studentCount++;
    		}

    		static int getStudentCount() {
        		return studentCount;
    		}

		//its a const method so it ensures that we haven't change any members
   		void getVal() const {
        		cout<<"Name: "<<name<<endl;
        		cout<<"Grade: "<<grade<<endl;
    		}

};



int Student::studentCount = 0;

int main() {
    Student student1("Sam", 8);
    Student student2("Santhosh", 11); 
    Student student3("Jeevan", 9);

    student1.getVal();
    student2.getVal(); 
    student3.getVal();

    cout << "Total no of students: " << Student::getStudentCount() << endl;

    return 0;
}

