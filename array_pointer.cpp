#include<iostream>
using namespace std;
class Salary{
	int da,it,gross,net;
	public:
		int basic,id;
			string name;
		void readData(){
		 	cin>>name>>id>>basic;;
			da = 0.52 * basic;
			gross = da + basic;
			it = gross * 0.3;
			net = gross -it;
		}
		void displaySalary(){
			cout<<"Name: "<<name<<endl;
			cout<<"id: "<<id<<endl;
			cout<<"Basic: "<<basic<<endl;
			cout<<"Net Salary: "<<net<<endl;
		}
};

int main(){
	int i,n;
	cout<<"Number of employees\n";
	cin>>n;
	Salary s[n],*ptr;
	ptr = s;
	for(i = 0;i < n;i++){
		(ptr+i)->readData();
	}
	for(i = 0;i < n;i++){
		(ptr+i)->displaySalary();
	}
	return 0;
}
