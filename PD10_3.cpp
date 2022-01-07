//masivi_3
#include <iostream>
using namespace std;
int main ()
{
    int size, i;
    cin >> size;
    if ((size >= 10) && (size <= 100)) {
        int a[size], b[size], ab[size];
        for (i = 0; i < size; i++)
            cin >> a[i];
        for (i = 0; i < size; i++)
            cin >> b[i];
        for (i = 0; i < size; i++) {
            ab[i] = a[i] + b[i];
            cout << ab[i] << " ";
        }
    }
    else cout << "Ievadītais massīvu izmērs ir ārpus noteiktā diapazona!";
    //system ("pause");
    return 0;
}