#include <iostream>
#include <conio.h>

using namespace std;
#define jmldata 10

//awalnya ada void
// void AWAL();
// void INSERT_KIRI();
// void INSERT_KANAN();
// void DELETE_KIRI();
// void DELETE_KANAN();
// void CETAK_ANTRIAN();
// void Inisialisasi();
// void RESET();
// void QUIT();

int L=0, R=-1, Q[jmldata], x;
int pilihan;

int main()
{
    // Inisialisasi();
    do
    {
		cout << " ----------------------------------------------------------------------" << endl;
        cout << "|====================== Program Double Ended Queue ====================|" << endl;
        cout << "|================================ SYECH ===============================|" << endl;
        cout << " ----------------------------------------------------------------------" << endl;
        cout << " L = " << L << " R = " << R << endl;
        cout << "SILAKAN PILIH OPTIONS DIBAWAH INI" << endl;
        cout << "1. INSERT KIRI" << endl;
        cout << "2. INSERT KANAN" << endl;
        cout << "3. DELETE KIRI" << endl;
        cout << "4. DELETE KANAN" << endl;
        cout << "5. CETAK ANTRIAN" << endl;
        cout << "6. QUIT" << endl;
        cout << "Masukan pilihan anda : ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1: //insert kiri
            if (L > 0)
            {
                cout << endl
                     << "Insert Kiri : ";
                cin >> x;
				L = L - 1;
                Q[L] = x;
            }
            else
                cout << "Antrian Penuh" << endl;
            break;
        case 2: // insert kanan
            if (R < jmldata - 1)
            {
                cout << endl
                     << "Insert Kanan : ";
                cin >> x;
                R = R + 1;
                Q[R] = x;
            }
            else
                cout << "Antrian Penuh" << endl;
            break;
        case 3: // hapus kiri
            if (L <= R)
            {
                x = Q[L];
                L = L + 1;
                // Q[L++] = '1';
                cout << "Data kiri yang di Delete :" << x << endl;
                if (L == jmldata)
                {
                    // RESET();
                }
            }
            else
                cout << "Antrian Kosong" << endl;
            break;
        case 4: // hapus kanan
            if (L <= R)
            {
                x = Q[R];
                R = R - 1;
                // Q[R--] = '1';
                cout << "Data kanan yang Delete : " << x << endl;
                if (R == jmldata)
                {
                    // RESET();
                }
            }
            else
                cout << "Antrian Kosong" << endl;
            break;
        case 5: // cetak
            if (L < R + 1)
            {
            	cout << "\nBerikut Antrian nya\n" << endl ;
                for (int i = L; i <= R; i++)
                    cout << "Q[" << i << "]="<< Q[i] << "\t";
            }
            else
                cout << "Antrian Kosong" << endl;
            break;
        case 6: // quit
            exit(0);
            break;

        default:
            cout << "PILIHAN TIDAK TERSEDIA !";
            break;
        }
        cout << "\nTekan Untuk Melanjutkan" << endl;
        getch();
        system("cls");
    } while (pilihan < 10);
}

// void AWAL()
// {
//     L = 0;
//     R = -1;
// }
// void INSERT_KIRI()
// {
//     if (L < jmldata + 1)
//     {
//         L = L - 1;
//         cout << endl
//              << "MASUKAN 1 ANGKA (kiri):";
//         cin >> x;
//         Q[L] = x;
//     }
//     else
//         cout << "Antrian Penuh" << endl;
// }
// void INSERT_KANAN()
// {
//     if (R < jmldata - 1)
//     {
//         cout << endl
//              << "MASUKAN 1 ANGKA (kanan):";
//         cin >> x;
//         R = R + 1;
//         Q[R] = x;
//     }
//     else
//         cout << "Antrian Penuh" << endl;
// }
// void DELETE_KIRI()
// {
//     if (L <= R + 1)
//     {
//         x = Q[L];
//         L = L + 1;
//         Q[L++] = '1';
//         cout << "Data kiri yang diambil :" << x << endl;
//         if (L == jmldata)
//             RESET();
//     }
//     else
//         cout << "Antrian Kosong" << endl;
// }
// void DELETE_KANAN()
// {
//     if (L <= R + 1)
//     {
//         x = Q[R];
//         R = R - 1;
//         Q[R++] = '1';
//         cout << "Data kanan yang diambil : " << x << endl;
//         if (R == jmldata)
//             RESET();
//     }
//     else
//         cout << "Antrian Kosong" << endl;
// }
// void CETAK_ANTRIAN()
// {
//     if (L < R + 1)
//     {
//         for (int i = L; i <= R; i++)
//             cout << "Q[" << i << "]=" << Q[i] << endl;
//     }
//     else
//         cout << "Antrian Kosong" << endl;
// }
// void Inisialisasi()
// {
//     L = 0;
//     R = -1;
// }
// void RESET()
// {
//     L = 0;
//     R = -1;
// }
// void QUIT()
// {
//     exit(0);
// }
