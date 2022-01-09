//c++ stila virknes
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s, krt;
    int sk;
    cout << "Ievadiet virkni: ";
    getline (cin, s);
    sk = s.length();
    cout << "Rakstzīmju skaits virknē: " << sk << endl;
    char tpb;
    tpb = s[0];
    int pbk;
    pbk = tpb;
    cout << "Teikuma pirmais burts: " << tpb << " un ta ASCII kods: " << pbk << endl;
    int i, vst = 1, bas = 0;
    for (i = 0; i < sk; i++)
    {
        krt = s.substr(i, 1);
        if (krt == " ") vst = vst+1;
        if (krt == "a") bas = bas + 1;
    }
    cout << "Vārdu skaits teikumā ir: " << vst << endl;
    cout << "Burtu a skaits teikumā ir: " << bas << endl;
//system("pause");
    return 0;
}











