#include <iostream>

using namespace std;

struct Mahasiwa {
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main()
{
	Mahasiwa mhs1, mhs2;
	mhs1.nim = "20220140202";
	mhs1.nama = "wawan";
	mhs1.alamat = "Riau";
	mhs1.umur = 18;

	cout << "Masukan nim :";
	cin >> mhs2.nim;
	cout << "Masukan Nama :";
	cin >> mhs2.nama;
	cout << "Masukan Alamat :";
	cin >> mhs2.alamat;
	cout << "Masukan Umur :";
	cin >> mhs2.umur;

	cout << "\nNim : " << mhs1.nim;
	cout << "\nNama : " << mhs1.nama;
	cout << "\nAlamat : " << mhs1.alamat;
	cout << "\nUmur : " << mhs1.umur;


	cout << "\nNim : " << mhs2.nim;
	cout << "\nNama : " << mhs2.nama;
	cout << "\nAlamat : " << mhs2.alamat;
	cout << "\numur : " << mhs2.umur;
};


