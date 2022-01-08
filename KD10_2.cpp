//Darbības ar masīviem
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
    int i, j, s = 0, min = 50, ri = 0, ki = 0, m[4][4];
    srand ( time(NULL) );
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++) m[i][j] = (rand() % 51);
    }
    cout <<"Masiva elementu vertibas:" << endl;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++) if(min > m[i][j])
            {
                min = m[i][j];
                ri = i;
                ki = j;
            }
    }
    cout << "Mazākais skaitlis ir " << min << " un tas atrodas "
         << ri <<" rinda un " << ki << " kolonna" << endl;
    for (j = 0; j < 4; j++) s = s + m[0][j];
    cout << "0. rindas vidējā vērtība ir " << s/4 << endl;
    //system ("pause");
    return 0;
}