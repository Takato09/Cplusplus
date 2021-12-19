//Zarošanās_2
#include <iostream>
using namespace std;
int main ()
{
    float x;
    cout << "Ievadiet jebkuru skaitli:\n";
    cin >> x;
    if (x<0) x=-x;
    cout <<"Absolūtā vērtība ir: " << x << endl;
//system ("pause");
    return 0;
}