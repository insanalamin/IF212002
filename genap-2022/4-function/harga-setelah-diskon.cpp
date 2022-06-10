// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void hitungHarga(int hargaSatuan, int jumlah, int diskon) {
    
    int totalHargaRp = hargaSatuan * jumlah;
    int totalDiskonRp = totalHargaRp * diskon / 100;
    int totalHargaKurangDiskonRp = totalHargaRp - totalDiskonRp;
    
    cout << "Total harga setelah dikurangi diskon : " << totalHargaKurangDiskonRp;
}

int main() {
    hitungHarga(14000, 7, 33);

    return 0;
}
