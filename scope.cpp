#include<iostream>
using namespace std;
int i = 1,j = 2, k = 3;
class A{
	int i,j,k;
	public:
		void function(int i,int j,int k);
};
void A::function(int i,int j,int k){
	this->i = i;
	this->j = j;
	this->k = k;
	cout<<"local variables: "<<i<<" "<<j<<" "<<k<<" "<<endl;
	cout<<"Different scope: "<<::i<<" "<<::j<<" "<<::k<<" "<<endl;
}
int main(){
	int i,j,k;
	cin>>i>>j>>k;
	A s;
	s.function(i,j,k);
	return 0;
}
