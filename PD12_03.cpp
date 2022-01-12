//Pāra-nepāra skaitļu noteikšana intervālā
#include <iostream>
using namespace std;

int main()
{
    int a, b, count = 0;
    cout << "Ievadiet veselu skaitļu intervāla sākumpunktu un beigu punktu: ";
    cin >> a >> b;
    for (a; a<=b; a++) {
        if (a%2 == 0) {
            count++;
            cout << a << " ";
        }
    }
    cout << "\nSkaits: " << count;
    //system("pause");
    return 0;
}

