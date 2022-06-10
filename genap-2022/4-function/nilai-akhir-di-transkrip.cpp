// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void nilaiDiTranskrip(int nilaiAkhir) {
    
    string nilaiAkhirString = "E";
    
    if(nilaiAkhir >= 75) {
        nilaiAkhirString = "A";
    } else if(nilaiAkhir > 64) {
        nilaiAkhirString = "B";
    } else if(nilaiAkhir > 49) {
        nilaiAkhirString = "C";
    } else if(nilaiAkhir > 29) {
        nilaiAkhirString = "D";
    }
    
    cout << "nilai akhirnya " << nilaiAkhir << ", jadi di transkripnya dapet " << nilaiAkhirString;
}

int main() {
    nilaiDiTranskrip(40);

    return 0;
}
