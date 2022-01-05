//Apgabals
#include <iostream>
using namespace std;
int main ()
{
    int int1;
    int int2;
    int x;

    cout << "Ievadiet pirmo un pēdējo intervāla skaitli!\n";
    cin >> int1;
    cin >> int2;
    cout << "Ievadiet skaitli pārbaudei!\n";
    cin >> x;
    if (x > int1 && x < int2) cout << "Skaitlis ietilpst abgabalā!" << endl;
    else cout << "Skaitlis ārpus abgabala!" << endl;
    //system ("pause");
    return 0;
}


