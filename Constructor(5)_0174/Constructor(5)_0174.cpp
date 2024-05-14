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
        //membuat pointer this agar bisa menjalankan chain function
        return *this;
    };
    //pembuatan method getJudul()
    string getJudul()
    {
        return this->judul;
    };
}bukunya;

int main() {
    //menggunakan function biasa
   // bukunya.setJudul("matematika");
   //cout << bukunya.getJudul;

    //menggunakan chain function calls
    cout << bukunya.setJudul("Matematika").getJudul();

    return 0;

}