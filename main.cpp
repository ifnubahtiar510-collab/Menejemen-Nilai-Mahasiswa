#include <iostream>
#include <string>
using namespace std;

string nama[100];
float nilai[100];
int jumlah = 0;

int main() {
    int pilih;

    do {
        cout << "\n1. Tambah data" << endl;
        cout << "2. Tampil data" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih : ";
        cin >> pilih;

        if (pilih == 1) {
            float tugas, uts, uas;
            cout << "Nama        : ";
            cin >> nama[jumlah];
            cout << "Nilai Tugas : ";
            cin >> tugas;
            cout << "Nilai UTS   : ";
            cin >> uts;
            cout << "Nilai UAS   : ";
            cin >> uas;
            nilai[jumlah] = tugas * 0.3 + uts * 0.3 + uas * 0.4;
            jumlah++;
        } else if (pilih == 2) {
            for (int i = 0; i < jumlah; i++) {
                cout << i + 1 << ". " << nama[i] << " - " << nilai[i];
                if (nilai[i] >= 85) cout << " (A)" << endl;
                else if (nilai[i] >= 70) cout << " (B)" << endl;
                else if (nilai[i] >= 55) cout << " (C)" << endl;
                else cout << " (D)" << endl;
            }
        }
    } while (pilih != 0);

    return 0;
}