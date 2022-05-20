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
