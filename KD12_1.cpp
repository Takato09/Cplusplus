//Nejauša 4 elementu masīva sakārtošana augošā secībā

#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
    srand(time(0));
    int m[4];
    for (int i = 0; i < 4; i++)
    {
        m[i] = 1 + rand() % 9;
        cout << " m[" << i << "]=" << m[i] << " ";
    }
    sort(m,m+4);
    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << " m[" << i << "]=" << m[i] << " ";
    }
    //system ("pause");
    return 0;
}