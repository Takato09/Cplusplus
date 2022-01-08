//Skaitļa kāpināšana
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int x, y, n;
    cout << "Lūdzu ievadiet skaitli x: ";
    cin >> x;
    cout << "Lūdzu ievadiet kāpinātāju n: ";
    cin >> n;
    if (n >= 1) {
        cout << pow(x, n);
    }
    else cout << "Programma beidz darbu, jo ievadīta negatīva vērtība!!!";
    //system ("pause");
    return 0;
}