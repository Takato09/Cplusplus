//50 elementu masīvu ar nepāra skaitļiem

#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
    srand(time(0));
    int m[50];
    for (int i = 0; i < 50; i++)
    {
        m[i] = 1 + rand() % 99;
        cout << (m[i]%2 ? m[i] : m[i]+1) << " : ";
    }
    //system ("pause");
    return 0;
}