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
}

int main() {

}