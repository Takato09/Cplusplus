//cikls_1
#include <iostream>
using namespace std;
int main ()
{
    int i, x1, x2, s = 0;
    cout << "Ievadiet 2 veselus skaitlus (otrais lielaks par pirmo)!\n";
    cin >> x1 >> x2;
    for (i = x1; i <= x2; i = i + 1) s = s + i;
    cout << "Summa ir: " << s << endl;
    //  system ("pause");
    return 0;
}