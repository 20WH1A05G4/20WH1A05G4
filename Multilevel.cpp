#include<iostream>
using namespace std;
class A{
	public:
		float length;
};
class B: public A{
	public:
		float breath,height;
};
class C:public B{
	public:
		float volume(){
			return length * breath * height;
		}
};
int main(){
	C c;
	cout<<"Enter dimensions:"<<endl;
	cin>>c.breath>>c.height>>c.length;
	cout<<"Volume:"<<endl<<c.volume();
	return 0;
}
