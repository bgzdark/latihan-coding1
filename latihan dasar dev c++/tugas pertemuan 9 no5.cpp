#include<iostream>
#include<conio.h>
using namespace std;
main(){
	int terbesar, a, b, c, d ;
	cout<<"masukan nilai ke-1 : ";
	cin>>a;
	cout<<"masukan nilai ke-2 : ";
	cin>>b;
	cout<<"masukan nilai ke-3 : ";
	cin>>c;
	cout<<"masukan nilai ke-4 : ";
	cin>>d;
	getch();
	terbesar=a;
  	if(b>terbesar){
		terbesar=b;
	}
	if(c>terbesar){
		terbesar=c;
	}
	if(d>terbesar){
		terbesar=d;
    }
    cout<<"nilai terbesar adalah : "<<terbesar;
}
