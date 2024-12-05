#include <iostream>
#include <cmath>
#include<windows.h>

using namespace std;


void tampilan_kalkulator() {
    cout<<"-----------------------------------------"<<endl;
    cout<<"----                                  ---"<<endl;
    cout<<"-             Kalkulator               -"<<endl;
    cout<<"-             Matematika               -"<<endl;
    cout<<"---                                   ---"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"-      +     |      -      |      *     -"<<endl;
    cout<<"-  Tambah    |   Kurang    |     Kali   -"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"-      /     |      m      |      L     -"<<endl;
    cout<<"-   Bagi     |     Mod     |     Log    -"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"-      S     |      K      |      p     -"<<endl;
    cout<<"-   Kuadrat  |    Kubik    |   Pangkat  -"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"-      s     |      c      |      t     -"<<endl;
    cout<<"-     sin    |     cos     |     tan    -"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"-      r     |      C      |      .     -"<<endl;
    cout<<"-    Akar    |    clear    |    close   -"<<endl;
    cout<<"-----------------------------------------"<<endl;
}


void tampilan_output(double hasil) {
    cout<<"-----------------------------------------"<<endl;
    cout<<"----                     ----------------"<<endl;
    cout<<"-     HASIL             |     "<<endl;
    cout<<"-                       |  "<<hasil<<endl;
    cout<<"---                      ----------------"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"-      +     |      -      |      *     -"<<endl;
    cout<<"-  Tambah    |   Kurang    |     Kali   -"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"-      /     |      m      |      L     -"<<endl;
    cout<<"-   Bagi     |     Mod     |     Log    -"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"-      S     |      K      |      p     -"<<endl;
    cout<<"-   Kuadrat  |    Kubik    |   Pangkat  -"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"-      s     |      c      |      t     -"<<endl;
    cout<<"-     sin    |     cos     |     tan    -"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"-      r     |      C      |      .     -"<<endl;
    cout<<"-    Akar    |    clear    |    close   -"<<endl;
    cout<<"-----------------------------------------"<<endl;
}

int main() {
    double angka1 = 0.0;
    double angka2 = 0.0;

    double hasil = 0.0;
    char input = '\n';
    bool konversi = 0;
    while(input != '.') {
        if(konversi == 1) {
            tampilan_output(hasil);
            cout<<"Masukkan Operator : ";
            cin>>input;
            if(input == '+' || input == '-' || input == '*' || input == '/' || input == 'm' || input == 'p') {
                angka1 = hasil;
                cout<<"Masukkan Angka 2 : ";
                cin>>angka2;
            } else if(input == 'C' || input == '.') {

            } else {
                angka1 = hasil;
            }
        } else {
            tampilan_kalkulator();
            cout<<"Masukkan Operator : ";
            cin>>input;
            if(input == '+' || input == '-' || input == '*' || input == '/' || input == 'm' || input == 'p') {
                cout<<"Masukkan angka 1 : ";
                cin>> angka1;

                cout<<"Masukkan angka 2 : ";
                cin>>angka2;
            } else if(input == 'C' || input == '.') {

            } else {
                cout<<"Masukkan angka 1: ";
                cin>>angka1;
            }

            konversi = 1;

        }


  
    return 0;
}
