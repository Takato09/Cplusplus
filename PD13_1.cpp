//funkcijas_1
#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int r;
    r = a + b;
    return r;
}
int main ()
{
    int x1, x2, rez;
    char zime;
    zime = 'j';
    while (zime == 'j')
    {
        cout <<"Ievadiet divus veselus skaitļus!" << endl;
        cin >> x1 >> x2;
        rez = sum(x1, x2);
        cout << "Summa ir: " << rez << endl;
        cout << "Vai vēlaties turpināt darbu (j-jā, citi taustiņi-nē)?" << endl;
        cin >> zime;
    }
    //system("pause");
    return 0;
}