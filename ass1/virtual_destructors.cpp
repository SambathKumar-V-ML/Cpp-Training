#include <iostream>
using namespace std;


class base{
        protected:
           int privatevar;

        public:
           base(int var){
                privatevar = var;
           }

           virtual int getprotectedvar(){  
                return privatevar;
           }

	   virtual ~base(){
	   	cout<<"Base Class Destructor "<<endl;
	   }

};



class derived : public base{
        	
	int* data;
	public:

            derived(int var,int x):base(var){
		data = new int(x);
	    }

            int getprotectedvar(){
                return (*data)*privatevar;
            }
	    
	    ~derived(){
	    	delete data;
		cout<<"Derived Class Destructor "<<endl;
	    }


};

int main(){
	
        base* basePtr = new derived(20,2);
        cout<< basePtr->getprotectedvar() <<endl;  // Derived::display ,not Base::display
        delete basePtr;
        return 0;



}

                                                                                                   
