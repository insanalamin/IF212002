# Array dan Looping

## Tools

Untuk coding C++ secara online dapat menggunakan
- [Programiz](https://www.programiz.com/cpp-programming/online-compiler/)
- [OnlineGDB](https://www.onlinegdb.com/online_c++_compiler)
- [W3Schools](https://www.w3schools.com/cpp/trycpp.asp?filename=demo_compiler)

## Referensi
- [W3 - While Loop](https://www.w3schools.com/CPP/cpp_while_loop.asp)
- [W3 - Do While Loop](https://www.w3schools.com/CPP/cpp_do_while_loop.asp)
- [W3 - For Loop](https://www.w3schools.com/CPP/cpp_for_loop.asp)
- [W3 - Break & Continue](https://www.w3schools.com/CPP/cpp_break.asp)

## Pengulangan While

### Dasar

```cpp
#include <iostream>
using namespace std;

int main() {
  int jumlahTugas = 0;
  
  while(jumlahTugas < 5) {
    cout << jumlahTugas << " tugas untuk dikerjakan\n";
    jumlahTugas++;
  }
  
  return 0;
}
```

```cpp
#include <iostream>
using namespace std;

int main() {
  int langkah = 0;
  int sampaiTujuan = 0;
  
  while (sampaiTujuan == 0) {
    cout << langkah << "\n";
    
    if(langkah == 20) {
        sampaiTujuan = 1;
    }
    
    langkah++;
  }
  return 0;
}
```

### Deret Genap

```cpp
#include <iostream>
using namespace std;

int main() {
  int pengali = 0;
  
  while(pengali < 5) {
    cout << pengali * 2 << " merupakan bilangan genap ke " << pengali << "\n";
    pengali++;
  }
  
  return 0;
}
```

### Penggunaan Break
```cpp
#include <iostream>

using namespace std;

struct player_t {
  int id;
  string nama;
  string asalDaerah;
  string skill;
};

int main() {

  // lua, r, python, ruby
  // <namaVariabelnyaApa> = <nilaiVariabelnya>

  // c++, c, java
  // <tipeNyaApa> <namaVariabelnyaApa> = <nilaiVariabelnya>

  player_t player[] = {
    {
      1,
      "Tono",
      "Garut",
      "mencuri"
    },
    {
      2,
      "Dian",
      "Tangerang",
      "hacking"
    },
    {
      3,
      "Budi",
      "Tasik",
      "memberontak"
    },
    {
      4,
      "Nazeela",
      "Bogor",
      "cucipiring"
    },
    {
      5,
      "Jamal",
      "Bandung",
      "menanampadi"
    }
  };

  int idPlayerYangHarusDikeluarkan = 4;

  player[1].nama = "Dian May";

  for (int i = 0; i < 5; i++) {

    if (player[i].id == idPlayerYangHarusDikeluarkan) {
      cout << "berbuat ulah nih si " << player[i].nama << " ayo keluarkan ! \n";

      break;
    }

    cout << "lihat itu si " << player[i].nama << " sedang " << player[i].skill << "\n";
  }

}
```

### Penggunaan Continue
```cpp
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

struct warga_t {
    int id;
    string nama;
    string pekerjaan;
    int gaji;
};

int main() {
    
    int gajiMaksimalDapetSembako = 1500000;
    
    warga_t warga[] = {
        {1, "Toyot", "pemborong", 500000},
        {2, "Sarip", "pendekar", 1100000},
        {3, "Yayat", "pemintaminta", 16000000},
        {4, "Bahra", "basogerobak", 1300000},
        {5, "Yuyun", "warung", 750000},
    };
    
    for(int i = 0; i < 5; i++) {
        
        if(warga[i].gaji > gajiMaksimalDapetSembako) {
            continue;
        }
        
        cout << "Selamat, " << warga[i].nama << " sang " << warga[i].pekerjaan << " Anda dapet sembako \n";
    }
    
}
```

### Cari bilangan antara 0 - 100 dapat dibagi 2 dan dibagi 3
```cpp
#include <iostream>
using namespace std;

// Ada berapa bilangan diantara 0 - 100 yang habis dibagi 2 dan habis dibagi 3 

int main() {

    // Total bilangan yang habis dibagi 2 dan 3
    int n = 0;
    for(int i = 0; i<101; i++) {
        if(i%2==0 && i%3==0) {
            n++;
            cout << n << ". " << i << "\n";
        }
    }
    
    cout << "Ada " << n << " bilangan";

}
```

### Segitiga
```cpp
#include <iostream>
using namespace std;

/*
*
**
***
****
*****
******
*****
****
***
**
*
*/

int main() {

    int jumlahLangkah = 12;
    
    for(int langkah = 0; langkah < jumlahLangkah; langkah++) {
        
        int jumlahLangkahPer2 = jumlahLangkah/2;
        
        if(langkah <= jumlahLangkahPer2) {
            for(int bintang = 0; bintang < langkah; bintang++) {
                cout << "*";
            }
            cout << "\n";
        } else {
            for(int bintang = 0; bintang < (jumlahLangkah - langkah); bintang++) {
                cout << "*";
            }
            cout << "\n";
        }
    }

}
```
