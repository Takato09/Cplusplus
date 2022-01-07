//Dalāmo ar 7 bez atlikuma atrašana noteiktā diapazonā
#include <iostream>
using namespace std;
int main ()
{
    int a, b;
    do
    {
        cout << "Ievadiet intervāla pirmo un pēdējo skaitli diapazonā no 100 līdz 10000!\n";
        cin >> a >> b;
        if (((a > 100) && (a < 10000)) && ((b > 100) && (b < 10000))) {
            int y = 0;
            for(int i=a;i<=b;i++)
                if(i%7==0) y++;
            cout << "Ievadītajā intervālā ir " << y << " skaitļi, kas dalās ar 7 bez atlikuma." << endl;
        }
        else
            cout << "Programma beidz darbu, jo ievadītais intervāls ir ārpus noteiktā diapazona!" << endl;
    }
    while (((a > 100) && (a < 10000)) && ((b > 100) && (b < 10000)));
    //  system ("pause");
    return 0;
}