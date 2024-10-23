#include<iostream>
using namespace std;
main(){
	string nilai[24];
	int b;
	int a;
	cout<<"nilai b : ";
	cin>>b;
	for( a=1; a<=b; a++){
		cout<<"input nilai\n"<<a<<":";
		cin>>nilai[a];
	}
	cout<<"hasil nya adalah"<<endl;
	for( a=1; a<=b;a++){
	cout<<"nilai :"<<a<<nilai[a]<<endl;
}	
}