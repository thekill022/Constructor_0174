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

//pendefinisian prosedur cetakData() dan isiData()
void angka::cetakData() {
    for (int i = 1; i <= panjang; i++)
    {
        cout << i << " = " << arr[i] << endl;
    };
};

void angka::isiData() {
    for (int i = 0; i < panjang; i++)
    {
        cout << i << " = ";
        cin >> arr[i];
    };
};

int main() {

    //pembuatan dan pemberian nilai object
    angka belajarcpp(3);
    angka* ptrBelajarcpp = new angka(5);
    //mendelete variabel pointer ptrBelajarcpp untuk membebaskan memori
    delete ptrBelajarcpp;

    return 0;

}