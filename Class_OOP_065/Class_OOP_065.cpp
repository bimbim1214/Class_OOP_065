#include <iostream>
using namespace std;

class Mahasiswa {
private:
    int nim;
    string nama;
    float nilai;

public:
    void input() {
        cout << "masukan NIM : ";
        cin >> nim;
        cout << "\nmasukan nama : ";
        cin >> nama;
        cout << "\nmasukan nilai : ";
        cin >> nilai;
    }
    void prinntData();
};

void Mahasiswa::prinntData() {
    cout << "\nData Mahsiswa : ";
    cout << "\nNIM : " << nim;
    cout << "\nnamanya : " << nama;
    cout << "\nnilai : " << nilai;
}

class mataKuliah {
private:
    string kode;
    string namaMK;
    int sks;
