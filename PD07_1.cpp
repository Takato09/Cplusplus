//Zarošanās_1
#include <iostream>
using namespace std;
int main ()
{
    float x, d;
    cout << "Ievadiet jebkuru skaitli:\n";
    cin >> x;
    if (x!=0)
    {
        d=1/x;
        cout << d << endl;
    }
    else
    {
        cout << "Ar 0 dalīt nedrīkst!" << endl;
        cout << "Nepareizi ievadīti dati!" << endl;
    };
    //system ("pause"); // šo dažreiz vajag atkomentēt
    return 0;
}
