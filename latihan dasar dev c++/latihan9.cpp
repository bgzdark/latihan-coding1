#include<iostream>
#include<conio.h>
using namespace std;
int main(){
string A="apakah mamat sudah makan?";
string B="apakah setelah makan mamat minum?";
string C="mamat tidak makan";
string D="setelah minum mamat tidur";
string E="mamat lansung main";
string jawab;
int pilihan=0;
string id;
string pw;
a:
cout<<"login sebagai:"<<endl;
cout<<"1. admin"<<endl;
cout<<"2. user"<<endl;
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
		if(pw=="321"){
		cout <<A;
    	cin>>jawab;
        	if(jawab=="ya"){
 	    	cout<<B;
 	    	cin>>jawab;
       			if(jawab=="ya"){
 	   			cout<<D;
 	   			cin>>jawab;
    			}else{
 				cout<<E;
 				cin>>jawab;
    			}
    		}else{
 			cout<<C;
    		}
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
	break;
	case 2:
	c:
	cout<<"masukan username : ";
	cin>>id;
	if(id=="user"){
	cout<<"masukukan password : ";
	cin>>pw;
		if(pw=="123"){
		cout <<A;
    	cin>>jawab;
        	if(jawab=="ya"){
 	    	cout<<B;
 	    	cin>>jawab;
       			if(jawab=="ya"){
 	   			cout<<D;
 	   			cin>>jawab;
    			}else{
 				cout<<E;
 				cin>>jawab;
    			}
    		}else{
 			cout<<C;
    		}
        }else if(!(pw=="123")){
        	 cout<<"password salah!";
        	 getch();
        	 system("cls");
    		goto b;
		}
	
	}else if(!(id=="user")){
		cout<<"masukan password : ";
		cin>>pw;
		cout<<"username salah!"<<endl;
		if(!(pw=="123")){
			cout<<"Password salah";
		}
		getch(); //untuk pause program sementara
		system("cls"); // menghapus isi koment form
		goto a; // kembali ke variabel yang dituju
	
	return 0;
}
