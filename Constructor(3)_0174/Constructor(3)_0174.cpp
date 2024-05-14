#include <iostream>
using namespace std;

class Mahasiswa {
private:
	int nim;
	string nama;
public:
	//pembuatan dan pendefinisian constructor yang di definiskan didalam class
	Mahasiswa() {
		nim = 174;
		nama = "Dzikri";
	};

	Mahasiswa(int iNim) {
		nim = iNim;
	};

	//deklarasi constructor dengan parameter
	Mahasiswa(string);
	Mahasiswa(int iNim, string iNama);
	//deklarasi prosedur cetak()
	void cetak();
};

//pendefinisial constructor diluar class
Mahasiswa::Mahasiswa(string iNama) {
	nim = 174;
	nama = iNama;
};

Mahasiswa::Mahasiswa(int iNim, string iNama) {
	nim = iNim;
	nama = iNama;
};

//pendefinisian prosedur cetak() diluar class
void Mahasiswa::cetak() {
	cout << endl << "Nim = " << nim << endl;
	cout << "Nama = " << nama << endl;
};

int main() {

	//pembuatan dan pemberian nilai pada object
	Mahasiswa mhs1;
	Mahasiswa mhs2(174);
	Mahasiswa mhs3("Gibran Fathoni");
	Mahasiswa mhs4(181, "Duta Brahmana");

	//memanggil prosedur cetak()
	mhs1.cetak();
	mhs2.cetak();
	mhs3.cetak();
	mhs4.cetak();
	system("pause");

	return 0;

}