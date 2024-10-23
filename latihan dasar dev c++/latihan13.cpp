#include<iostream>
using namespace std;
main(){
	int pil, semester;
	string lomba;
	cout<<"pilih perlombaan"<<endl;
	cout<<"1. Pemrograman"<<endl;
	cout<<"2. Desain Poster"<<endl;
	cout<<"pilihan";
	cin>>pil; 
	switch(pil){
	case 1:
		cout<<"keterangan diri : ";
	cin>>semester;
	if(semester<4){
	    cout<<"lomba pemrograman dasar"<<endl;
	 }else{
        cout<<"lomba pemrograman lanjutan"<<endl;
    }
		  
    break;
	case 2:
    	cout<<"keterangan diri : ";
	cin>>semester;
	if(semester>4){
		cout<<"mengerjakan poster bertema webinar/seminar"<<endl;
	}else{
        cout<<"mengerjakan poster tentang masyarakat"<<endl;
}
}
	cout<<"keterangan lomba yang dikerjakan mahasiswa adalah "<<lomba<<endl;
}
