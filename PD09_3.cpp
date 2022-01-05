//cikls_3
#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int i, j;
    for (i = 1; i <= 5; i = i + 1)
    {
        for (j = 1; j <= 5; j= j + 1) cout << setw(5) << i*j;
        cout << endl;
    }
    // system ("pause");
    return 0;
}