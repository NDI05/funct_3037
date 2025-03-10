#include <iostream>
using namespace std;

float calculateAverange(int x, int y){
    return (x+y)/2;
}

string givingStatus(int x){
    if(x >= 75)
        return "Lulus";
    else
        return "gagal";
}

int main () {
    int nilai1, nilai2;
    cout << "Silahkan Masukkan Nilai Pertama Anda =";
    cin >> nilai1;
    cout << "Silahkan Masukkan Nilai Kedua Anda =";
    cin >> nilai2;
    cout << "Status Kelulusan Anda :" << givingStatus(calculateAverange(nilai1, nilai2)) << endl;
}
