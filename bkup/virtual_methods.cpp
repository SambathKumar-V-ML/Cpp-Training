#include <iostream>
using namespace std;
int main(){

	class base{

	protected:
	   int privatevar; 
	
	public:
	   base(int var){
	   	privatevar = var;
	   }

       	   virtual int getprotectedvar(){  //removing virtual keyword will lead to dependency on the pointer datatype when calling the method
	   	return privatevar;
	   } 
	
	
	};


	base obj1(10);

	class derived : public base{
	
	
	
	public:
	 
	    derived(int var): base(var){}

            int getprotectedvar(){
	    	return 2*privatevar;
	    }
	
	};
		
	base* basePtr = new derived(20);
        cout<< basePtr->getprotectedvar() <<endl;  // Derived::display ,not Base::display
    	delete basePtr;
	return 0;



}
