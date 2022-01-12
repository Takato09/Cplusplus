// Divdimensiju masīvs
#include <iostream>
using namespace std;

int main ()
{
    int i, j, m[3][4];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++) m[i][j] = j+i;
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            cout << m[i][j] << "  ";
        cout << endl;
    }
    //system ("pause");
    return 0;
}