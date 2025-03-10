#include <iostream>
using namespace std;

float panjang, lebar, luas;

void inputData(){
    cout << "Silahkan Masukkan Nilai Panjang: ";
    cin >> panjang;
    cout << "Silahkan Masukkan Nilai Lebar: ";
    cin >> lebar;
}

void processingData(){
    luas = panjang * lebar;
}

void showData(){
    cout << "Luas Persegi Panjang Adalah " << luas << endl;
}

int main(){
    inputData();
    processingData();
    showData();
}
