#include<iostream>
using namespace std;
int main(){
	int i,arr[3],sum = 0,n;
	cin>>n;
	int *ptr = new int[n];
	if(ptr = NULL){
		cout<<"ERROR!!";
	}
	else{
		for(i = 0; i < n;i++){
			cin>>arr[i];
		}
		for(i = 0; i < n; i++){
			sum = sum + arr[i];
			cout<<"sum + arr["<<i<<"] = "<<sum<<endl;
		}
		cout<<"Sum:"<<endl<<sum;
	}
	delete [] ptr;
	return 0;
}
