//cikls_2
#include <iostream>
using namespace std;
int main ()
{
    int x, f;
    do
    {
        cout << "Ievadiet temperatūru diapazonā no 0 līdz 50!\n";
        cin >> x;
        f= x*9/5+32;
        if ((x > -50) && (x < 50))
            cout << "Fārenheita grādi ir: " << f << endl;
        else
            cout << "Programma beidz darbu, jo temperatūra ārpus noteiktā diapazona!" << endl;
    }
    while ((x > -50) && (x < 50));
    //  system ("pause");
    return 0;
}