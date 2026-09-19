#include <iostream>

using namespace std;

int main() {  
    float jariJari, keliling;   
  // Menggunakan konstanta untuk nilai Pi
    const float PI = 3.14159f; 

    cout << "Program Menghitung Keliling Lingkaran\n";
    cout << "-------------------------------------\n";
    
    // Meminta input jari-jari dari pengguna
    cout << "Masukkan Jari-Jari (r): ";
    cin >> jariJari;

    // Proses perhitungan keliling lingkaran
    keliling = 2 * PI * jariJari;

    // Menampilkan hasil ke layar
    cout << "Keliling Lingkaran = " << keliling << "\n";

    return 0;
}

