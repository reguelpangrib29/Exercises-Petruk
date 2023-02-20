#include <iostream>
#include <string>
using namespace std;

int main (){
	string namalengkap,kelas;
	int jumlah;
	jumlah = namalengkap.length();
	
	float nilai;
	
	cout << "Nama Lengkap : ";
	getline(cin,namalengkap);
	cout << "Kelas : ";
	cin >> kelas;
	cout << "Nilai DDP : ";
	cin >> nilai;
	
	cout << "Izin memperkenalkan diri nama saya " << namalengkap << " dengan jumlah huruf " << namalengkap.length() << ". Saya mahasiswa S1 Ilmu Komputer dari kelas " << kelas << " Nilai DDP saya adalah " << nilai <<".";
	
	return 0;
	
}
