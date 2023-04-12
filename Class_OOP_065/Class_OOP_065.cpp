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

}