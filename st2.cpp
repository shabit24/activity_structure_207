#include <iostream>
using namespace std;

struct AlamatDetails
{
    string desa;
    string kota;
};

struct Mahasiswa
{
    string nim;
    string nama;
    AlamatDetails alamat;
    int umur;
};

int main()
{
    Mahasiswa mhs;

    cout << "Enter Nim: ";
    cin >> mhs.nim;
    cout << "Enter Nama: ";
    cin >> mhs.nama;
    cout << "Alamat: " << endl;
    cout << "\tNama desa: ";
    cin >> mhs.alamat.desa;
    cout << "\tNama kota : ";
    cin >> mhs.alamat.kota;
    cout << "Enter age: ";
    cin >> mhs.umur;

    cout << "\n Nim: " << mhs.nim;
    cout << "\n Name: " << mhs.nama;
    cout << "\n Alamat: " << mhs.alamat.desa;
    cout << "umur: " << mhs.umur;
}