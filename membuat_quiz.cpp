#include <iostream>

using namespace std;

int main()
{


int a,b,c;
cout << "       Quiz             \n";
cout << "Pertanyaan pertama \n";
cout << "Yuna : Mr. Katara, I'd like to introduce my self. _____ a new secretary at Inc.";
cout << "Mr. Tomo : How do you do? It's nice to meet you. \n";
cout << "Yuna : How do you do? It's nice to meet you, too. \n";
cout << "1. I'm Yuna     2.I'm Tomo     3.He's Tomo \n";
cout << "choose the answer by selecting the number: ";
cin >> a;

if (a == 1)
{
    cout << "YAPP, kamu benar!!!! \n";
}
else {
    cout << "Kamu Salah \n";
}
cout << "   \n";
cout << "Pertanyaan kedua \n";
cout << "They went to the zoo with some friends of ………  \n";
cout << "1. Mine    2. Yours    3. Theirs \n";
cout << "choose the answer by selecting the number: ";
cin >> b;
if (a == 3)
{
    cout << "YAPP, kamu benar!!!! \n";
}
else {
    cout << "Kamu Salah \n";
}
cout << "    \n";
cout << "Pertanyaan ketiga \n";
cout << "Whose pencils are these? …… or………? \n";
cout << "1. You or mine     2. Yours or mine   3. Your or my \n";
cout << "Choose the answet by select the number: ";
cin >> c;
if (a == 2)
{
    cout << "YAPP, kamu benar!!!! \n";
}
else {
    cout << "Kamu Salah \n";
}

cin.get();
return 0;
}
