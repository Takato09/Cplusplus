//Divu masīvu elementu starpības atrašana.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
    int i, lp3=0, a[7], b[7], c[7];
    srand ( time(NULL) );
    for (i = 0; i < 7; i++) a[i] = (rand() % 10 + 1);
    for (i = 0; i < 7; i++) b[i] = (rand() % 10 + 1);
    for (i = 0; i < 7; i++) cout << " A[" << i << "]=" << a[i];
    cout << endl;
    for (i = 0; i < 7; i++) cout << " B[" << i << "]=" << b[i];
    cout << endl;
    for (i = 0; i < 7; i++) c[i] = a[i] - b[i];
    for (i = 0; i < 7; i++) cout << " C[" << i << "]=" << c[i];
    cout << endl;
    for (i = 0; i < 7; i++) if (b[i] < 3) lp3++;
    cout << "Masīva B elementu skaits, kas mazāki par 3: " << lp3
         << endl;
    //system ("pause");
    return 0;
}