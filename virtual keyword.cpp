#include<iostream>
using namespace std;
class base{
	public:
		virtual void show(){
			cout<<"show base class"<<endl;
		}
		void set(){
			cout<<"Set base class"<<endl;
		}
};

class derived: public base{
	public:
		void show(){
			cout<<"Show derived class"<<endl;
		}
		void set(){
			cout<<"Set derived class"<<endl;
		}
};

int main(){
	base *ptr;
	derived d;
	ptr = &d;
	ptr->show();
	ptr->set();
	
	return 0;
}
