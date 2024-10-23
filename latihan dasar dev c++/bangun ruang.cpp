#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	int pilihan;
	double phi = 3.14, l , p , a , t , r , s, v, vo, vt;
	float LS, LL, LPP, LP;
	a:
	cout << "                    ANDA MAU MEMILIH PERUMUSAN YANG MANA                 "<<endl;
	cout << "1. segitiga"<<endl;
	cout << "2. lingkaran"<<endl;
	cout << "3. persegi panjang"<<endl;
	cout << "4. persegi"<<endl;
	cout << "5. kecepatan"<<endl;
	cout << "6. percepatan"<<endl;
	cout << "masukan pilihan : ";
	cin >> pilihan;
	
	switch(pilihan){
		case 1:
			cout << "anda memilih segitiga"<<endl;
			cout << "masukan alas : ";
			cin >> a;
			cout << "masukan tinggi : ";
			cin >> t;
			LS = (a*t)/2;
			cout << "luas segitiga adalah "<<LS<<endl;
			getch();
			goto a;
			system("cls");
			break;
		case 2:
		 	cout << "anda memilih linkaran"<<endl;
			cout << "masukan jari-jari : ";
			cin >> r;
			LL = phi*r*r;
			cout << "luas lingkaran adalah "<<LL<<endl;
			getch();
			goto a;
			system("cls");
			break;
		case 3:
			cout << "anda memilih persegi panjang"<<endl;
			cout << "masukan panjang : ";
			cin >> p;
			cout << "masukan lebar : ";
			cin >> l;
			LPP = p*l;
			cout << "luas persegi panjang adalah "<<LPP<<endl;
			getch();
			goto a;
			system("cls");
			break;
		case 4:
			cout << "anda memilih persegi"<<endl;
			cout << "masukan sisi : ";
			cin >> s;
			LP = s*s*s;
			cout << "luas persegi adalah "<<LP<<endl;
			getch();
			goto a;
			system("cls");
			break;
		case 5:
			cout << "anda memilih nomor 5"<<endl;
			cout << "1. kecepatan"<<endl;
			cout << "2. waktu"<<endl;
			cout << "3. jarak"<<endl;
			cout << "masukan pilihan : ";
			cin >> pilihan;
			if(pilihan==1){
			cout << "masukan jarak dalam keadaan meter : ";
			cin >> s;
			cout << "masukan waktu dalam keadaan detik : ";
			cin >> t;
			v = s/t;
			cout << "kecepatan adalah : "<<v<<endl;
		    }else{
			if(pilihan==2){
			cout << "masukan kecepatan : ";
			cin >> v;
			cout << "masukan jarak dalam keadaan meter : ";
			cin >> s;
			t = s/v;
			cout << "waktu dalam detik adalah : "<<t<<endl;
		    }else{
			if(pilihan==3){
			cout << "masukan kecepatan : ";
			cin >> v;
			cout << "masukan waktu dalam keadaan detik : ";
			cin >> t;
			s = v*t;
			cout << "jarak dalam meter adalah : "<<v<<endl;
	 	    }
	 	    }
	 	    }
			getch();
			goto a;
			system("cls");
			break;
		case 6:
			cout << "anda memilih percepatan"<<endl;
			cout << "masukan kecepatan awal : ";
			cin >> vo;
			cout << "masukan kecepatan akhir : ";
			cin >> vt;
			cout << "masukan waktu dalam detik : ";
			cin >> t;
			a=(vt/3600-vo/3600)/t;
			cout << "percepatan adalah : "<<a<<endl;
			getch();
			goto a;
			system("cls");
			break;
		default:
			cout << "baru 4 nanti kita tambah lagi"<<endl;
	}
	system("cls");
}

