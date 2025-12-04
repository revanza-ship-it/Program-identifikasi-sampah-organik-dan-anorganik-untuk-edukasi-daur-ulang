#include <iostream>
using namespace std;

// Union untuk kode buah
union KodeBuah {
    int kodeAngka;     // menyimpan kode buah dalam bentuk angka
    char kodeHuruf;    // menyimpan kode buah dalam bentuk huruf
    float hargaPromo;  // menyimpan harga promo buah
};

int main() {
    KodeBuah buah;

    cout << "=== DEMONSTRASI UNION ===\n\n";

    // Menyimpan angka
    buah.kodeAngka = 123;
    cout << "Isi kodeAngka   : " << buah.kodeAngka << endl;
    cout << "Isi kodeHuruf   : " << buah.kodeHuruf << " (tidak valid)" << endl;
    cout << "Isi hargaPromo  : " << buah.hargaPromo << " (tidak valid)\n\n";

    // Menyimpan huruf
    buah.kodeHuruf = 'A';
    cout << "Setelah mengisi kodeHuruf = 'A':\n";
    cout << "Isi kodeHuruf   : " << buah.kodeHuruf << endl;
    cout << "Isi kodeAngka   : " << buah.kodeAngka << " (berubah/tidak valid)\n";
    cout << "Isi hargaPromo  : " << buah.hargaPromo << " (tidak valid)\n\n";

    // Menyimpan harga promo
    buah.hargaPromo = 9.99;
    cout << "Setelah mengisi hargaPromo = 9.99:\n";
    cout << "Isi hargaPromo  : " << buah.hargaPromo << endl;
    cout << "Isi kodeAngka   : " << buah.kodeAngka << " (tidak valid)" << endl;
    cout << "Isi kodeHuruf   : " << buah.kodeHuruf << " (tidak valid)\n";

    return 0;
}
