//Intervāla skaitļu dlīšana bez atlikuma
#include <iostream>
using namespace std;

int main()
{
    int a, b, d, count = 0;
    cout << "Ievadiet veselu skaitļu intervāla sākumpunktu un beigu punktu: ";
    cin >> a >> b;
    cout << "Ievadiet skaitli dalāmības pārbaudei: ";
    cin >> d;
    for (a; a<=b; a++) {
        if (a%d==0) {
            count++;
            cout << a << " ";
        }
    }
    cout << "\nSkaits: " << count;
    //system("pause");
    return 0;
}

