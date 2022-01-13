//Kvadrātvienādojuma sakņu atrašana
#include <iostream>
#include <cmath>
using namespace std;

void asterisks ()
{
    string S(70, '*');
    cout << S << endl;
}
void diskriminants (int a, int b, int c) {
    double d,x1,x2;
    d=(b*b)-(4*a*c);
    if(d==0)
    {
        x1=(-b+sqrt(d))/(2*a);
        cout << "Viena sakne x1: " << x1 <<endl;
    }
    if(d>0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        cout << "Divas saknes x1: " << x1 << " x2: " << x2 <<endl;
    }
    if(d<0)
    {
        cout<<"Reālu sakņu nav"<<endl;
    }
}
int main ()
{
    int a, b, c;
    char zime;
    zime = 'j';
    while (zime == 'j')
    {
        cout <<"Kvadrātvienādojuma atrisināšana" << endl;
        asterisks ();
        cout <<"Ievadiet kvadrātvienādojuma koeficientus:" << endl;
        cin >> a >> b >> c;
        diskriminants(a, b, c);
        cout << "Vai vēlaties turpināt darbu (j-jā, citi taustiņi-nē)?" << endl;
        cin >> zime;
    }
    //system("pause");
    return 0;
}