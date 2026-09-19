#include <iostream>
using namespace std;

int main () {
    int lusin, buah;

    cout << "Program konversi lusin ke buah\n";
    cout << "------------------------------\n";
      
    // Meminta input dari pengguna
    cout << "Masukkan jumlah lusin: ";
    cin >> lusin;

    // Proses konversi (1 Lusin = 12 buah)
    buah = lusin * 12;
   
    // Menampilkan hasil
    cout << lusin << " Lusin = " << buah << " Buah\n";

 return 0; 
         
 }
