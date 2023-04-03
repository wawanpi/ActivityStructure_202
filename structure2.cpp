#include <iostream>
using namespace std;

struct AlamatDetail
{
	string desa;
	string kota;
};

struct Mahasiswa
{
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main() {
	Mahasiswa mhs;
	cout << "Masukan nim : ";
	cin >> mhs.nim;
	cout << "Masukan nama : ";
	cin >> mhs.nama;
	