#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int pilihan=0;
string id;
string pw;
a:
cout<<"login sebagai:"<<endl;
cout<<"1. admin"<<endl;
cout<<"Masukan pilihanmu: ";
cin>>pilihan;

switch(pilihan)
case 1:
	b:
	cout<<"masukan username : ";
	cin>>id;
	if(id=="admin"){
	cout<<"masukukan password : ";
	cin>>pw;
	cout<<"anda berhasil login";
		if(pw=="321"){
		}else if(!(pw=="321")){
        	 cout<<"password salah!";
        	 getch();
        	 system("cls");
    		goto b;
		}
	
	    }else if(!(id=="admin")){
		cout<<"masukan password : ";
		cin>>pw;
		cout<<"username salah!"<<endl;
		if(!(pw=="321")){
			cout<<"Password salah";
		}
		getch(); //untuk pause program sementara
		system("cls"); // menghapus isi koment form
		goto a; // kembali ke variabel yang dituju
	}
	
	return 0;
}
