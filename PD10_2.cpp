//masīvi_2
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
    int i, j, s = 0, max = 0, ri = 0, ki = 0, m[3][3];
    srand ( time(NULL) );
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) m[i][j] = (rand() % 101);
    }
    cout <<"Masiva elementu vertibas:" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) if(max < m[i][j])
            {
                max = m[i][j];
                ri = i;
                ki = j;
            }
    }
    cout << "Lielakais skaitlis ir " << max << " un tas atrodas "
         << ri <<" rinda un " << ki << " kolonna" << endl;
    for (j = 0; j < 3; j++) s = s + m[1][j];
    cout << "1. rindas skaitļu summa ir " << s << endl;
    //system ("pause");
    return 0;
}