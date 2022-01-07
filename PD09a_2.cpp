//Piramīdas stāvu aprēķināšana
#include <iostream>
using namespace std;
int main ()
{
    int x, f;
    do
    {
        cout << "Ievadiet plākšņu skaitu diapazonā no 100 līdz 10000!\n";
        cin >> x;
        f = 1;
        if ((x >= 100) && (x <= 10000)) {
            int y = x;
            while((y-=f*f)-(f+1)*(f+1)>=0) f++;
            cout << "Piramīdai būs " << f << " stāvi." << endl;
        }
        else
            cout << "Programma beidz darbu, jo plākšņu skaits ir ārpus noteiktā diapazona!" << endl;
    }
    while ((x >= 100) && (x <= 10000));
    //  system ("pause");
    return 0;
}