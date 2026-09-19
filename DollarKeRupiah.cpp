#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Mendeklarasikan variabel dengan tipe data float
    float usd, idr;
    
    // Menetapkan kurs USD ke IDR saat ini
    float kurs = 17753.0f; 

    cout << "Program Konversi US Dollar (USD) ke Rupiah (IDR)\n";
    cout << "------------------------------------------------\n";
    cout << "Kurs saat ini: 1 USD = Rp " << kurs << "\n\n";
    
    // Meminta input jumlah Dollar dari pengguna
    cout << "Masukkan jumlah Dollar (USD): ";
    cin >> usd;

    // Proses perhitungan konversi
    idr = usd * kurs;

    // Menampilkan hasil 
    // (fixed dan setprecision(2) digunakan agar angka tidak menjadi notasi ilmiah dan memiliki 2 angka di belakang koma)
    cout << fixed << setprecision(2);
    cout << usd << " USD = Rp " << idr << "\n";

    return 0;
}

