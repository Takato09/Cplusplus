//Izvēle
#include <iostream>
using namespace std;
int main ()
{
    int x;
    cout << "Ievadiet skaitli no 1 līdz 9!\n";
    cin >> x;
    switch (x)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
            cout << "Nepāra skaitlis" << endl;
            break;
        case 2:
        case 4:
        case 6:
        case 8:
            cout << "Pāra skaitlis" << endl;
            break;
        default:
            cout << "Skaitlis arpus abgabala!" << endl;
    }
//system ("pause");
    return 0;
}


