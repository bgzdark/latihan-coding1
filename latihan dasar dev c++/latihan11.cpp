#include<iostream>
using namespace std;
main(){
	float k,t,uts,uas,r=12,bk, bt, buts, buas,total;
	cout<<"input K:";
	cin>> k;
	cout<<"input T:";
	cin>> t;
	cout<<"input UTS:";
	cin>> uts;
	cout<<"input UAS:";
	cin>> uas;
	
	bk=k/r*10;
	bt=t*20/100;
	buts=uts*30/100;
	buas=uas*40/100;
	total=bk+bt+buts+buas;
    if(k<=(r*50/100)){
    	cout<<"tugas tambah"<<endl;
	if(total>=80){
		string grade="A";
		cout<<"Grade kamu: "<<grade;
		cout<<"\nlulus dengan grade";
    }else{
		cout<<total<<endl;
	}	
	
	}else{
		cout<<"tidak lulus";
		
		
	}	

}
