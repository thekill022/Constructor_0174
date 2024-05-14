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


int main() {

}