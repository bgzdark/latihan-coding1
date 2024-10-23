#include<iostream>
using namespace std;
main(){
	int a, b, c, d;
	cout<<"masukan nilai ke-1 : ";
	cin>>a;
	cout<<"masukan nilai ke-2 : ";
	cin>>b;
	cout<<"masukan nilai ke-3 : ";
	cin>>c;
     	if(a<b)
	      if(b<c)
	      cout<<"\n urutkan nilai dari yang terkecil : "<<a<<" "<<b<<" "<<c<<" ";
	      else
	          if(a<c)
	          cout<<"\n urutkan nilai dari yang terkecil : "<<a<<" "<<c<<" "<<b<<" ";
           	  else
	          cout<<"\n urutkan nilai dari yang terkecil : "<<c<<" "<<a<<" "<<b<<"";
	          else
	              if(a<c)
	              cout<<"\n urutkan nilai dari yang terkecil : "<<b<<" "<<a<<" "<<c<<"";
	              else
	                  if(b<c)
	                  cout<<"\n urutkan nilai dari yang terkecil : "<<b<<" "<<c<<" "<<a<<"";
	                  else
	                  cout<<"\n urutkan nilai dari yang terkecil : "<<c<<" "<<b<<" "<<a<<"";
    }
