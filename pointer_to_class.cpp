#include<iostream>
using namespace std;
class Volume{
	int side;
	public:
		void set(int side){
			this->side = side;
		}
		int volume(){
			return side * side * side;
		}
};
int main(){
	int s;
	cout<<"Enter the side:"<<endl;
	cin>>s;
	Volume cube,*ptr;
	ptr = &cube;
	ptr->set(s);
	cout<<"Volume:"<<endl<<ptr->volume();
	return 0;
}
