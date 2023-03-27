#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float a,b;




    cout << "         KALKULATOR SEDERHANA          /n";
    cout << endl;
    cout << "Kalkulator ini akan menjumlahkan, mengurankan, mengali, membagi, dan juga menghitung modulos.";
    cout << endl;

    cout << "Masukkan angka pertama: ";
    cin  >> a;

    cout << "Masukkan angka kedua: ";
    cin  >> b;

    //penjumlahan
    cout << "hasil penjumlahan    " << a << "+" << b << " = ";
    cout << a+b << endl;

    //pengurangan
    cout << "hasil pengurangan    " << a << "-" << b << " = ";
    cout << a-b << endl;

    //perkalian
    cout << "hasil perkalian      " << a << "*" << b << " = ";
    cout << a*b << endl;

    //perkalia
    cout << "hasil pembagian      " << a << "/" << b << " = ";
    cout << setprecision(0) << a/b << endl;


    int c = a;
    int d = b;
    //modulos
    cout << "hasil modulos        " << c << " mod " << d << " = ";
    cout << c%d << endl;

    cin.get();
return 0;
}
