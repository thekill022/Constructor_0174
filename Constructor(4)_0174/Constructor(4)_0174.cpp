#include <iostream>
using namespace std;

class angka {

private:
    int* arr;
    int panjang;
public:
    angka(int);
    //deklarasi destructor ~angka()
    ~angka();
    //deklarasi prosedur cetakData() dan isiData()
    void cetakData();
    void isiData();
};

//pendefinisian constructor angka(int) diluar class
angka::angka(int i) {
    panjang = i;
    arr = new int[i];
    isiData();
};

//pendefinisian destructor ~angka() diluar class
angka::~angka() {

    cout << endl;
    cetakData();
    delete[]arr;
    cout << "alamat array sudah dilepas" << endl;

};


int main() {

}