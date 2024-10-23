#include<iostream>
using namespace std;
main(){
	int T=50, A=10, B=5;
	   cout<<"masukan nilai T : ";
	   cin>>T;
	if (A<B){
		cout<<T;
		A *= T;
		cout<<A;
	}else{
		T /= B;
		cout<<T;
	}
}
