//Nejauša 10 elementu masīva pārveidošana masīvā bez desmitiem

#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
    srand(time(0));
    int m[10];
    for (int i = 0; i < 10; i++)
    {
        m[i] = 7 + rand() % 8;
        cout << m[i] << " : ";
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << m[i]%10 << " : ";
    }
    //system ("pause");
    return 0;
}