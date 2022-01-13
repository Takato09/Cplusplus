//Skaitļa faktoriāla atrašana izmantojot funkciju
#include <iostream>
using namespace std;
int sum(int a)
{
    int g = 1;
    for (int i = 1; a >= i; ++i) g*=i;
    return g;
}
int main ()
{
    int x, rez;
    char zime;
    zime = 'j';
    while (zime == 'j')
    {
        cout <<"Ievadiet veselu skaitli diapazonā no 1 līdz 12!" << endl;
        cin >> x;
        if ((x>0) && (x<13)) {
        rez = sum(x);
        cout << "Faktoriāls ir: " << rez << endl;
        }
        else cout << "Skaitlis neietilpst noteiktajā diapazonā!";
        cout << "Vai vēlaties turpināt darbu (j-jā, citi taustiņi-nē)?" << endl;
        cin >> zime;
    }
    //system("pause");
    return 0;
}