#include<iostream>
using namespace std;
struct details{
	string name,branch;
	int roll_no;
};
int main(){
	details S;
	S.name = "Tony";
	S.branch = "ECE";
	S.roll_no = 101;
	cout<<"Student details: "<<endl<<"Name "<<S.name<<endl<<"Branch "<<S.branch<<endl<<"Roll number "<<S.roll_no<<endl;
	return 0;
}
