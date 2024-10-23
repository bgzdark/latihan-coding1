#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int kode,pri,jml,tot,byr,kbl;
	char mad;
	do{
	    cout<<" WARUNG MAKAN "<<endl;
	    cout<<" ANUGRAH "<<endl;
	    cout<<" Aplikasi Pembayaran Warung Makan "<<endl;
	    cout<<"==================================================="<<endl;
	    cout<<"MENU MAKANAN       HARGA"<<endl;
	    cout<<"1. ASINAN BETAWI   Rp.10000"<<endl;
	    cout<<"2. GUDEG           Rp.12000"<<endl;
	    cout<<"3. MIE ACEH        Rp.10000"<<endl;
	    cout<<"4. SAYUR LODEH     Rp.8000"<<endl;
	    cout<<"5. RENDANG         Rp.12000"<<endl;
	    cout<<"6. RAWON           Rp.15000"<<endl;
	    cout<<"7. NASI LIWET      Rp.8000"<<endl;
	    cout<<"8. NASI PUTIH      Rp.5000"<<endl;
	    cout<<"9. ES TEH MANIS    Rp.5000"<<endl;
	    cout<<"10. AIR MINERAL    Rp.1000"<<endl;
	    cout<<'n'<<"MASUKAN PILIHAN ANDA :";
	    cin>>kode;
		switch(kode){
		case 1:
			cout<<'n'<<"ASINAN BETAWI"<<endl;
			pri=10000;
			cout<<"Masukan Jumlah :";
			cin>>jml;
			tot=pri*jml;
			cout<<"Total Harganya yaitu :Rp."<<tot<<endl;
			cout<<"DIBAYAR :Rp.";
			cin>>byr;
			kbl=byr-tot;
			cout<<"KEMBALI :Rp."<<kbl<<endl;
			cout<<"Masih ada Y/T:";
			cin>>mad;
			break;
		case 2:
			cout<<'n'<<"GUDEG"<<endl;
			pri=12000;
			cout<<"Masukan Jumlah :";
			cin>>jml;
			tot=pri*jml;
			cout<<"Total Harga yaitu :Rp."<<tot<<endl;
			cout<<"DIBAYAR :Rp.";
			cin>>byr;
			kbl=byr-tot;
			cout<<"KEMBALI :Rp."<<kbl<<endl;
			cout<<"Masih ada Y/T:";
			cin>>mad;
			break;
		case 3:
			cout<<'n'<<"MIE ACEH"<<endl;
			pri=10000;
			cout<<"Masukan Jumlah :";
			cin>>jml;
			tot=pri*jml;
			cout<<"Total Harga yaitu :Rp."<<tot<<endl;
			cout<<"DIBAYAR :Rp.";
			cin>>byr;
			kbl=byr-tot;
			cout<<"KEMBALI :Rp."<<kbl<<endl;
			cout<<"Masih ada Y/T:";
			cin>>mad;
			break;
		case 4:
			cout<<'n'<<"SAYUR LODEH"<<endl;
			pri=8000;
			cout<<"Masukan Jumlah :";
			cin>>jml;
			tot=pri*jml;
			cout<<"Total Harga yaitu :Rp."<<tot<<endl;
			cout<<"DIBAYAR :Rp.";
			cin>>byr;
			kbl=byr-tot;
			cout<<"KEMBALI :Rp."<<kbl<<endl;
			cout<<"Masih ada Y/T:";
			cin>>mad;
			break;
		case 5:
			cout<<'n'<<"RENDANG"<<endl;
			pri=12000;
			cout<<"Masukan Jumlah :";
			cin>>jml;
			tot=pri*jml;
			cout<<"Total Harga yaitu :Rp."<<tot<<endl;
			cout<<"DIBAYAR :Rp.";
			cin>>byr;
			kbl=byr-tot;
			cout<<"KEMBALI :Rp."<<kbl<<endl;
			cout<<"Masih ada Y/T:";
			cin>>mad;
			break;
		case 6:
			cout<<'n'<<"RAWON"<<endl;
			pri=15000;
			cout<<"Masukan Jumlah :";
			cin>>jml;
			tot=pri*jml;
			cout<<"Total Harga yaitu :Rp."<<tot<<endl;
			cout<<"DIBAYAR :Rp.";
			cin>>byr;
			kbl=byr-tot;
			cout<<"KEMBALI :Rp."<<kbl<<endl;
			cout<<"Masih ada Y/T :";
			cin>>mad;
			break;
		case 7:
			cout<<'n'<<"NASI LIWET"<<endl;
			pri=8000;
			cout<<"Masukan Jumlah :";
			cin>>jml;
			tot=pri*jml;
			cout<<"Total Harga yaitu :Rp."<<tot<<endl;
			cout<<"DIBAYAR :Rp.";
			cin>>byr;
			kbl=byr-tot;
			cout<<"KEMBALI :Rp."<<kbl<<endl;
			cout<<"Masih ada Y/T :";
			cin>>mad;
			break;
		case 8:
			cout<<'n'<<"NASI PUTIH"<<endl;
			pri=5000;
			cout<<"Masukan Jumlah :Rp.";
			cin>>jml;
			tot=pri*jml;
			cout<<"Total Harga yaitu :Rp."<<tot<<endl;
			cout<<"DIBAYAR :Rp.";
			cin>>byr;
			kbl=byr-tot;
			cout<<"KEMBALI :Rp."<<kbl<<endl;
			cout<<"Masih ada Y/T :";
			cin>>mad;
			break;
		case 9:
			cout<<'n'<<"ES TEH MANIS"<<endl;
			pri=5000;
			cout<<"Masukan Jumlah :Rp.";
			cin>>jml;
			tot=pri*jml;
			cout<<"Total Harga yaitu :Rp."<<tot<<endl;
			cout<<"DIBAYAR :Rp.";
			cin>>byr;
			kbl=byr-tot;
			cout<<"KEMBALI :Rp."<<kbl<<endl;
			cout<<"Masih ada Y/T :";
			cin>>mad;
			break;
		case 10:
			cout<<'n'<<"AIR MINERAL"<<endl;
			pri=1000;
			cout<<"Masukan Jumlah :Rp.";
			cin>>jml;
			tot=pri*jml;
			cout<<"Total Harga yaitu :Rp."<<tot<<endl;
			cout<<"DIBAYAR :Rp.";
			cin>>byr;
			kbl=byr-tot;
			cout<<"KEMBALI :Rp."<<kbl<<endl;
			cout<<"Masih ada Y/T :";
			cin>>mad;
			break;
			cout<<"Kode yang anda masukan tidak ada";
	}
}
while(mad/='Y');
cout<<"terima kasih telah datang ke warung kami";
}
