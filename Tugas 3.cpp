#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int sisi_a,sisi_b;
    double sisi_c;
    cout << "Menghitung Sisi Miring Segitiga Siku-Siku" << "\n" ;
    cout << "------------------------------------------" << "\n" ;
    cout << "Masukkan Panjang Sisi A : " ;
    cin >> sisi_a;
    cout << "Masukkan Panjang Sisi B : " ;
    cin >> sisi_b;

    sisi_c = sqrt((sisi_a*sisi_a)+(sisi_b*sisi_b));
    cout << "Sisi Miring : " << sisi_c << endl;
    cout << endl;

    cout << "Menghitung Nilai Akhir Mahasiswa" << endl;
    cout << "---------------------------------" << endl;

    float praktik=75,uts=70,uas=88,na;
    cout << "Nilai Praktikum : 75" << endl;
    cout << "Nilai UTS       : 70" << endl;
    cout << "Nilai UAS       : 88" << endl;

    na= (praktik*0.2)+(uts*0.3)+(uas*0.5);
    cout << "Jadi,Nilai Akhir     : " << na << endl;
    cout << endl;

    cout << "menghitung Arus(I), Tegangan (V) dan Hambatan (R)" << endl;

    cout << "--------------------------------------------------" << endl;
    float Arus,Tegangan,Hambatan,I,V,R;
    cout << "Masukkan Nilai Arus(I) : " ;
    cin >> Arus;
    cout << "Masukkan Nilai Tegangan(V) : " ;
    cin >> Tegangan;
    cout << "Masukkan Nilai Hambatan(R) : " ;
    cin >> Hambatan;

    I = Tegangan/Hambatan;
    V = Arus*Hambatan;
    R = Tegangan/Arus;
    cout << endl;
    cout << "Arus : " << I << endl;
    cout << "Tegangan : " << V << endl;
    cout << "Hambatan : " << R << endl;
    cout << endl;

    cout << "Buat program untuk menyelesaikan rumus " << endl;
    cout << "Y = bx2 + 0,5x - c, dimana nilai b = 25, x=15, c=2" << endl;
    cout << "---------------------------------------------------" << endl;
    float Y,b=25,x=15,c=20;
    Y=(b*(x*x))+ (0.5*x)- c;

    cout << "Nilai Y : " << Y << endl;






    return 0;
}
