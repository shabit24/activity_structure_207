#include <iostream>

using namespace std;

struct Mahasiswa
{
    string nim;
    string nama;
    string alamat;
    int umur;
};

int main()
{
    Mahasiswa mhs1, mhs2;

    mhs1.nim = "20210140011";
    mhs1.nama = "Tasya";
    mhs1.alamat = "semarang";
    mhs1.umur = 20;

    cout << "Enter Nim: ";
    cin >> mhs2.nim;
    cout << "Enter Name: ";
    cin >> mhs2.nama;
    cout << "Enter Alamat: ";
    cin >> mhs2.alamat;
    cout << "Enter umur: ";
    cin >> mhs2.umur;

    cout << "\n Nim: " << mhs1.nim;
    cout << "\n Name: " << mhs1.nama;
    cout << "\n Alamat: " << mhs1.alamat;
    cout << "\n Umur: " << mhs1.umur;

    cout << "\n Nim: " << mhs2.nim;
    cout << "\n Name: " << mhs2.nama;
    cout << "\n Alamat: " << mhs2.alamat;
    cout << "\n Umur: " << mhs2.umur;
}