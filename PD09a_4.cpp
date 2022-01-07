// funkcijas y(x)=5*x*x-3*x+4 vērtību tabula
#include <iostream>
using namespace std;
int main ()
{
    double x = -20.5, y, z=2064, xz;
    do
    {
        x+=0.5;
        y = 5*x*x-3*x+4;
        if (y < z) {
            z = y;
            xz = x;
        }
        cout.width(15);
        cout << x << "\t\t" << y << endl;
    }
    while ((x >= -20) && (x <= 19.5));
    //  system ("pause");
    cout << "Min. x: " << xz << ". Min. y: " << z;
    return 0;
}
