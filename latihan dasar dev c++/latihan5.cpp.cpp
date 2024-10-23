#include<iostream>
using namespace std;
main(){
	string barang="";
	int uang=0,pilihan=0,kembalian=0;
	cout<<"masukan uang:";
	cin>>uang;
	// submit pilihan
	if(uang>=100000){
		cout<<"anda dapat belanja"<<endl;
		cout<<"1.tas kecil rp.30000"<<endl;
		cout<<"2.dompet rp.25000"<<endl;
		cout<<"3.dompet dan tas kecil rp.55000"<<endl;
		cout<<"masukan pilihan:"<<endl;
		// perintah pemilihan
	cin>>pilihan;
	 
	// perintah yang akan dipilih
	if(pilihan==1){
		cout<<"anda belanja tas kecil"<<endl;
		kembalian=uang-30000;
		barang="tas kecil";
		}
	if(pilihan==2){
		cout<<"anda belanja dompet"<<endl;
		kembalian=uang-25000;
		barang="dompet";
	}
		if(pilihan==3){
		cout<<"anda belanja dompet dan tas kecil"<<endl;
		kembalian=uang-45000;
		barang="dompet dan tas kecil";
	}
 }else{
 	if(uang<=100000){
 	cout<<"anda dapat belanja"<<endl;
		cout<<"1.pensil rp.25000"<<endl;
		cout<<"2.buku rp.20000"<<endl;
		cout<<"masukan pilihan:"<<endl;
	cin>>pilihan;
	
		if(pilihan==1){
		cout<<"anda belanja pensil"<<endl;
		kembalian=uang-25000;
		barang="pensil";
	}
		if(pilihan==2){
		cout<<"anda belanja buku"<<endl;
		kembalian=uang-20000;
		barang="buku";
	    }
       }
     }
        // hasil perintah
        cout<<"output \n";
        cout<<"barang:"<<barang<<endl;
        cout<<"uang kamu:"<<uang<<endl;
        cout<<"kembalian:"<<kembalian<<endl;
		cout<<"terima kasih telah berbelanja"<<endl;
    }
  
