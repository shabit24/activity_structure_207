#include <iostream>
using namespace std;

struct AlamatDetails
{
    char desa[20];
    char kota[20];
};
struct Mahasiswa
{
    char nim[12];
    char nama[20];
    AlamatDetails alamat;
    int umur;
};
int main()
{
    Mahasiswa mhs[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter nim: ";
        cin.getline(mhs[i].nim, 12);
        cout << "Enter Nama: ";
        cin.getline(mhs[i].nama, 20);
        cout << "Alamat: " << endl;
        cout << "\tNama desa: ";
        cin.getline(mhs[i].alamat.desa, 20);
        cout << "\tNama kota : ";
        cin.getline(mhs[i].alamat.kota, 20);
        cout << "Enter age: ";
        cin >> mhs[i].umur;
        cin.ignore(1, '\n');
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "\nNim : " << mhs[i].nim;
        cout << "\nName : " << mhs[i].nama;
        cout << "\nNim : " << mhs[i].alamat.desa;
        cout << "\nNim : " << mhs[i].alamat.desa;
        cout << "\nNim : " << mhs[i].umur;
    }
}