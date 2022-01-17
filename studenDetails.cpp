#include<iostream>
using namespace std;
class details{
	public:
      int Rno,grade;
       string name;
       void get_name(string name){
           cout<<"Name :"<<name<<endl;
   }
      void get_num(int Rno, int grade){
          cout<<"Roll number: "<<Rno<<endl<<"Grade: "<<grade<<endl;
  }
};
int main(){
    details s[3];
    int i;
    cout<<"Enter student details:"<<endl;
   	for(i = 0; i < 3;i++){
   		cin>>s[i].name>>s[i].Rno>>s[i].grade;
	   }
    for(i = 0; i < 3; i++){
    	cout<<"Details ofstudent "<<i + 1<<":"<<endl;
    	s[i].get_name(s[i].name);
		s[i].get_num(s[i].Rno,s[i].grade);
	}
    return 0;
}

