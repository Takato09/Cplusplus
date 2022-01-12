//funkcijas_3
#include <iostream>
using namespace std;
void dubultot (int& a, int& b, int& c)
{
    a = a * 2;
    b = b * 2;
    c = c * 2;
    return;
}
int main ()
{
    int x, y, z;
    cout << "Ievadiet trīs veselus skaitļus: ";
    cin >> x >> y >> z;
    dubultot(x, y, z);
    cout << "x=" << x << ", y=" << y << ", z=" << z << '\n';
    //system("pause");
    return 0;
}

