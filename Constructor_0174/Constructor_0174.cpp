#include <iostream>
using namespace std;

class Mahasiswa { //membuat class mahasiswa

public:

	static int nim; //deklarasi variabel static yaitu variabel nim
	//deklarasi variabel member
	int id;
	string nama;

	//deklarasi prosedur setID() dan printAll()
	void setID();
	void printAll();

	//pembuatan construction Mahasiswa dengan parameter pnama
	Mahasiswa(string pnama) :nama(pnama) {
		setID();
	}

};

//memberi value ke variabel nim dari class mahasiswa
int Mahasiswa::nim = 174;

//mendefinisikan prosedr - prosedur di luar class
void Mahasiswa::setID() {

	id = ++nim;

};

void Mahasiswa::printAll() {

	cout << "ID : " << id << endl;
	cout << "Nama : " << nama << endl;
	cout << endl;

};


int main() {

	//membuat object dan memberi nilai
	Mahasiswa mhs1("Lia Kurnia");
	Mahasiswa mhs2("Asroni");
	Mahasiswa mhs3("Andi Kurniawa");
	Mahasiswa mhs4("Joko Purbo");

	//memanggil prosedur printAll()
	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	return 0;

}