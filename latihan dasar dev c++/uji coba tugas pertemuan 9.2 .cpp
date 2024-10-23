#include<iostream>
using namespace std;
main(){
	int T=0, A=5, B=10;
	   cout<<"masukan nilai T : ";
	   cin>>;
	if(A>B){
		T = T+A;
		T = T+B;
		cout<<"T :"<<T;
		
	}else{
		T = T-A;
		T = T-B;
	}
}
