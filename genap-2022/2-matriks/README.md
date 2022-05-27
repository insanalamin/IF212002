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
