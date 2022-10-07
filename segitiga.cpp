#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int luas,keliling;
    int alas,tinggi,sisi;
    cout << "aplikasi hitung luas & keliling segitiga"<< endl;
    cout << "masukan alas"; cin >> alas;
    cout << "masukan tinggi"; cin >> tinggi;
    luas = 0.5 * alas * tinggi;
    cout << "Luas segitiga = "<< endl;
    cout << "masukan sisi"; cin >> sisi;
keliling=sisi + sisi + sisi;
    cout << "keliling segitiga = "<< keliling;
}