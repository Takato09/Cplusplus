//Izvēle
#include <iostream>
using namespace std;
int main ()
{
    int x;
    int y;
    cout << "Ievadiet divus skaitļus!\n";
    cin >> x >> y;

    if(x > y) cout << "Pirmais skaitlis lielāks" << endl;
    else if(x < y) cout << "Otrs skaitlis lielāks" << endl;
    else cout << "Skaitļi vienādi" << endl;

    //system ("pause");
    return 0;
}


