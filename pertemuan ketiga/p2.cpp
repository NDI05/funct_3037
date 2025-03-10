#include <iostream>
using namespace std;

float panjang, lebar;

void inputData(){
    cout << "Silahkan Masukkan Nilai Panjang: ";
    cin >> panjang;
    cout << "Silahkan Masukkan Nilai Lebar: ";
    cin >> lebar;
}

float calculateData(){
    return panjang*lebar;
}

float calculateDataParams(float a, float b){
    return a*b;
}

void showData(){
    cout << "Luas persegi panjang (tanpa params) adalah "<< calculateData() << endl;
}

void showDataParams(){
    cout << "Luas persegi panjang (dengan params) adalah " << calculateDataParams(panjang, lebar) << endl;
}

int main(){
    inputData();
    showData();
    showDataParams();
}
