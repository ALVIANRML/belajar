#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float a,b;
    char aritmatika;




    cout << "         KALKULATOR SEDERHANA          \n";
    cout << endl;
    cout << "Kalkulator ini akan menjumlahkan, mengurankan, mengali, membagi, dan juga menghitung modulos.";
    cout << endl;

    cout << "Masukkan angka pertama: ";
    cin  >> a;
    
    cout << "Mau diapain +,-,*/,%(modulos): ";
    cin  >> aritmatika;
    
    cout << "Masukkan angka kedua: ";
    cin  >> b;
    
    //penjumlahan
    if (aritmatika == '+')
        { 
    cout << "hasil penjumlahan    " << a << "+" << b << " = ";
    cout << a+b << endl;
        }
    //pengurangan
    else if (aritmatika == '-')
        {
        cout << "hasil pengurangan    " << a << "-" << b << " = ";
        cout << a-b << endl;
        }
    //perkalian
    else if (aritmatika == '*')
        {
    cout << "hasil perkalian      " << a << "*" << b << " = ";
    cout << a*b << endl;
        }
    //pembagian
    else if (aritmatika == '/')
        {
    cout << "hasil pembagian      " << a << "/" << b << " = ";
    cout << setprecision(0) << a/b << endl;
        }
    //modulos
    else if (aritmatika == '%')
        {
    int c = a;
    int d = b;
    cout << "hasil modulos        " << c << " mod " << d << " = ";
    cout << c%d << endl;
        }
    cin.get();
return 0;
}
