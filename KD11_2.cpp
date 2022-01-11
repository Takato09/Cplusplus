//c++ stila virknes
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s, krt;
    int sk;
    cout << "Ievadiet teikumu: ";
    getline (cin, s);
    sk = s.length();
    cout << "Rakstzīmju skaits teikumā: " << sk << endl;
    char tpb;
    tpb = s[1];
    int pbk;
    pbk = tpb;
    int i, vst = 0;
    for (i = 0; i < sk; i++)
    {
        krt = s.substr(i, 1);
        if (krt == " ") vst++;
    }
    cout << "Atstarpju skaits teikumā ir: " << vst << endl;
    cout << "Teikuma otrais burts: " << tpb << " un tā ASCII kods: " << pbk << endl;
//system("pause");
    return 0;
}