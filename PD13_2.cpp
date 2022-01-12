//funkcijas_2
#include <iostream>
using namespace std;
void zv_rinda(int n)
{
    int i;
    for (i=1; i<=n; i++) cout << "*";
    cout << endl;
    return;
}
void tuksas_rindas ()
{
    cout << endl << endl << endl;
}
int main ()
{
    int skaits;
    cout << "Ievadiet zvaigznīšu skaitu rindā: ";
    cin >> skaits;
    zv_rinda (skaits);
    tuksas_rindas();
    zv_rinda (60);
    tuksas_rindas();
    // system("pause");
    return 0;
}

