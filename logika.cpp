#include <iostream>

using namespace std;

int main(){
    int a=19;
    int b=14;

    bool hasil;

//or (bisa menggunakan "or" atau "||")
    cout << "untuk boolean or \n";
    cout << endl;
    hasil = (a == 19) or (b == 14);     // bernilai true or true = true
    cout << hasil<<endl;

    hasil = (a== 200) or (b == 500);    // bernilai false or false = false
    cout << hasil<<endl;

    hasil = (a == 19) || (b == 20);     //   bernilai true or false = true
    cout << hasil << endl;

    hasil = (a == 30) || (b == 14);     // bernilai false or true = true
    cout << hasil << endl;


    cout << endl;
    // and (and bisa menggunakan "and" ataupun "&&"
    cout << "untuk boolean and \n";
     cout << endl;
    hasil = (a == 19) and (b == 14);    // bernilai true and true = true
    cout << hasil << endl;

    hasil = (a == 20) and  (b == 50);   // bernilai false and false = false
    cout << hasil << endl;

    hasil = (a == 19) && (b == 2);      // benilai true and false = false
    cout << hasil << endl;

    hasil = (a == 90) && ( b == 14);    // bernilai false and true = false
    cout << hasil << endl;
    //NOT ( not can use "!" before Parentheses)
    hasil = !(a == 79);
    cout << hasil << endl;
    cout << endl;

    cout << "untuk not \n";
    hasil = !(a == 19);
    cout << hasil << endl;              // end akan membalikan yang tadinya false menjadi true begitu pula sebaliknya

    hasil = ! (a == 14);
    cout << hasil << endl;

    cin.get();
return 0;
}
