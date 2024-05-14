#include <iostream>
using namespace std;

class buku { //pembuatan class buku
    string judul;

public:
    //pembuatan object prosedur setJudul()
    buku setJudul(string judul)
    {
        //pemberian nilai member judul dalam object dengan menggunakan this
        this->judul = judul;
    }
};

int main() {

}