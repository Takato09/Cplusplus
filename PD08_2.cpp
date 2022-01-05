//Vecākā noteikšana
#include <iostream>
#include <ctime>
using namespace std;
int main ()
{
    int x;
    int y;
    time_t now = time(0);
    tm *ltm = localtime(&now);
    cout << "Ievadiet divus dzimšanas gadaskaitļus! (Piem.: 1984 1986)\n";
    cin >> x >> y;

    if(x > y) cout << "Otrais subjekts vecāks" << endl;
    else if(x < y) cout << "Pirmais subjekts vecāks" << endl;
    else cout << "Vienādi" << endl;
    if((1900 + ltm->tm_year-x >= 100) && (1900 + ltm->tm_year-y >= 100)) cout << "Apsveicu vecīšus!";

    //system ("pause");
    return 0;
}


