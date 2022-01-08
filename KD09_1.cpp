//Faktoriāla atrašana
#include <iostream>
using namespace std;
int main ()
{
    int x, y, i;
    cout << "Ievadiet skaitli robežās no 1 līdz 12: ";
    cin >> x;
    if ((x >= 1) && (x <= 12)) {
        y = 1;
        for (i = 1; i <= x; i++) {
            y = y * i;
        }
        cout << y;
    }
    else cout << "Ievadītais skaitlis ir ārpus noteiktā diapazona!";
    //system ("pause");
    return 0;
}