// masivi_1
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
    int i, lp5=0, m1[8], m2[8], m3[8];
    srand ( time(NULL) );
    for (i = 0; i < 8; i++) m1[i] = (rand() % 10 +1);
    for (i = 0; i < 8; i++) m2[i] = (rand() % 10 +1);
    for (i = 0; i < 8; i++) cout << " m1[" << i <<"]=" << m1[i];
    cout << endl;
    for (i = 0; i < 8; i++) cout << " m2[" << i <<"]=" << m2[i];
    cout << endl << endl;
    for (i = 0; i < 8; i++) m3[i] = m1[i] + m2[i];
    for (i = 0; i < 8; i++) cout << " m3[" << i <<"]=" << m3[i];
    cout << endl << endl;
    for (i = 0; i < 8; i++) if (m1[i]>5) lp5++;
    cout << "Skaitļu skaits 1. masīvā, kas lielāki par 5: " << lp5
         << endl;
    //system ("pause");
    return 0;
}