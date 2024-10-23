#include<iostream>
#include<conio.h>
using namespace std;
main(){
	int pil, semester;
	string lmb;
	a:
	cout<<"pilih perlombaan"<<endl;
	cout<<"1. Pemrograman"<<endl;
	cout<<"2. Desain Poster"<<endl;
	cout<<"pilih nomor : ";
	cin>>pil; 
	switch(pil){
	case 1:
		cout<<"keterangan diri : ";
	cin>>semester;
	if(semester<4){
	    cout<<"lomba yang dikerjakan mahasiswa adalah lomba pemrograman dasar"<<endl;
	 }else{
        cout<<"lomba yang dikerjakan mahasiswa adalah lomba pemrograman lanjutan"<<endl;
    }
    break;
	case 2:
    	cout<<"keterangan diri : ";
	cin>>semester;
	if(semester>4){
		cout<<"lomba yang dikerjakan mahasiswa adalah mengerjakan poster bertema webinar/seminar"<<endl;
	}else{
        cout<<"lomba yang dikerjakan mahasiswa adalah mengerjakan poster tentang masyarakat"<<endl;
}
	break;
	default:
		cout<<"hanya 2 lomba saja\n";
		getch();
		system("cls");
		goto a;
}
    cout<<"selamat mengikuti lomba\n";
}
