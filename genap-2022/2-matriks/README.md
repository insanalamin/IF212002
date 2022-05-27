## Matriks

### Membuat Game Berbasis Tile 2 Dimensi - Contoh Pokemon

1. Tentukan desain environment
  Aturan tile:
  1. rumput pendek:
    - arrow key pindah posisi
  2. jalan:
    - arrow key pindah posisi
  3. semak belukar (akan muncul pokemon secara random)
    - arrow key pindah posisi
    - random 0.0 - 1.0, < 0.3 , muncul pokemon
  4. pohon
    - arrow key tidak bisa pindah ke area ini
  5. batu
    - arrow key tidak bisa pindah ke area ini
  6. genangan air
    - arrow key pindah posisi
  7. perairan
    - arrow key pindah posisi, asal perahu = true
    - random 0.0 - 1.0, < 0.3 , muncul pokemon tipe water / flying
  Ukuran environment, contoh 16 x 20
2. Tentukan desain karakter
  Aturan tile:
    1. Bisa ada di setiap tile yang diperbolehkan 1, 2, 3, 6, 7

3. Desain data
  1. Matriks untuk lingkungan
  2. Posisi dari karakter di matriks

## Kode C++
```cpp
#include <iostream>
using namespace std;

int main() {
    // Game pokemon
    /*
    1 
    2
    3
    4
    5
    6
    7
    */
    
    int panjangPeta = 20; // x
    int lebarPeta = 16; // y
    
    int posisiKarakterY = 15;
    int posisiKarakterX = 4;
    
    cout << "Karakter ada di y:" << posisiKarakterY << ", x:" << posisiKarakterX << "\n";
    
    int peta[lebarPeta][panjangPeta] = {
        {8,8,8,8,8,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {8,8,8,8,8,8,1,1,1,1,1,1,1,5,5,1,1,1,1,1},
        {8,8,8,1,1,1,1,1,1,1,1,1,1,5,5,1,1,1,1,1},
        {8,8,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,8,8,8,8,8,8,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,8,8,8,8,8,1,1,1,1,1,1,4,4,4,4,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,4,4,4,4,1,1,1},
        {1,1,1,5,5,1,1,1,1,1,4,4,4,4,4,4,4,1,1,1},
        {1,1,1,5,5,1,1,1,4,4,4,4,4,4,4,4,6,6,6,6},
        {1,1,5,5,1,1,1,1,4,4,4,4,4,4,4,4,4,1,1,1},
        {1,1,5,5,1,1,1,1,4,4,4,1,1,4,4,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,4,4,4,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,4,4,4,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,6,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,6,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,6,1,1,1,1,1,1,1,1,1},
    };
    
    // Menampilkan grafik
    for(int y=0; y<lebarPeta; y++) {
        for(int x=0; x<panjangPeta; x++) {
            
            if(posisiKarakterX == x && posisiKarakterY == y) {
                cout << 0 << " ";
            } else {
                cout << peta[y][x] << " ";
            }
        }
        cout << "\n";
    }
    
    return 0;
}
```
