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

int main() {

}