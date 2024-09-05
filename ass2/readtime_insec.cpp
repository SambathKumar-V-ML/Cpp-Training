#include <iostream>
using namespace std;

class Time{
	long int sec;
	int HH;
	int MM;
	int SS;
	public:
	void getTime(){
		cout<<"Enter Time in Seconds: ";
		cin>>sec;
		cout<<endl;
		HH = sec / 3600;
		sec %= 3600;
		MM = sec / 60;
		sec %= 60;
		SS = sec;
	}

	void showTime(){
		cout<<HH<<":"<<MM<<":"<<SS<<endl;

	}
		

};

int main(){
	Time t1;
	t1.getTime();
	t1.showTime();
	return 0;
}

