#include <iostream>
using namespace std;

// Object oriented
// Anggap objek2 itu kayak orang di kepanitiaan
// Masing2 punya tanggung jawab, dan fungsi yang spesifik

// Go, Rust, C, dsb. ga ada Class
// Ruby, PHP, Python, Java, C++ : Class

struct makanan {
	string nama;
	string tempatBeli;
	int skorRasa;
	int kadarMicin;
};

struct hero {
	string name;
	int basicAttack;
	int hp;
	int attackSpeed;
	
	equip() {
	}
	
	void attack(hero *heroObject) {
		int hpFrom = heroObject->hp;
		cout << name << " attacking " << heroObject->name << " ! \n";
		heroObject->hp = heroObject->hp - basicAttack;
		cout << heroObject->name << "'s hp drop from " << hpFrom << " to " << heroObject->hp << "\n";
	}
};

struct manusia {
	
	// ini sifat2 / properti2 manusia nya
	int umur;
	string nama;
	int tinggiBadan;
	int beratBadan;
	int jenisKelamin; // 1 pria, 2 wanita
	string emosiSaatIni;
	string hobi[10];
	int tingkatKecerdasan;
	
	printKecerdasan() {
		cout << "tingkat kecerdasan " << nama << " saat ini adalah " << tingkatKecerdasan << "\n"; 
	}
	
	// ini aksi2 / function2 yg bisa dilakukan manusia nya
	makan(makanan objekMakanan) {
		tingkatKecerdasan = tingkatKecerdasan - objekMakanan.kadarMicin;
		cout << "Saya makan ya !, " << " sama " << objekMakanan.nama << " yang dibeli di " << objekMakanan.tempatBeli << "\n";
		printKecerdasan();
	}
};


int main() {
	
	makanan makanan1;
	makanan1.nama = "Mie Hania";
	makanan1.tempatBeli = "Warungnya Hania";
	makanan1.skorRasa = 10;
	makanan1.kadarMicin = 1; //max 20
	
	makanan makanan2;
	makanan2.nama = "Seblak Gas Racun Membara";
	makanan2.tempatBeli = "Warungnya Nada";
	makanan2.skorRasa = 10;
	makanan2.kadarMicin = 6; //max 20
	
	manusia m1;
	m1.umur = 18;
	m1.nama = "Muis";
	m1.tinggiBadan = 165;
	m1.beratBadan = 45;
	m1.jenisKelamin = 1;
	m1.hobi[0] = "main kelereng";
	m1.hobi[1] = "baca keadaan";
	m1.hobi[2] = "karate";
	m1.tingkatKecerdasan = 100;
	
	
	m1.makan(makanan1);
	
	m1.makan(makanan2);
	m1.makan(makanan2);
	m1.makan(makanan2);
	m1.makan(makanan2);
	
	
	cout << "Ini " << m1.nama << " umurnya " << m1.umur << "\n";
	
	for(int i=0; i < 10; i++) {
		if(m1.hobi[i] != "") {
			cout << "hobi ke " << i+1 << " nya " << m1.hobi[i] << "\n";	
		}	
	}
	
	hero h1;
	h1.name = "balmond";
	h1.hp = 3000;
	h1.basicAttack = 215;
	
	hero h2;
	h2.name = "zilong";
	h2.hp = 2500;
	h2.basicAttack = 295;
	
	h1.attack(&h2);
	
	h2.attack(&h1);
	h2.attack(&h1);
	h2.attack(&h1);
	
	return 0;
}
