//c stila virknes
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;
int main()
{
    char v1[10] = "123", v2[10] = "456", v3[10], vs[2];
    int s = 0, i, c, sum = 0, x;
    float kv;
    strcpy(v3,v1);
    strcat(v3,v2);
    cout << "V1: " << v1 << endl;
    cout << "V2: " << v2 << endl;
    cout << "V3: " << v3 << endl;
    s = strlen(v3);
    cout << "Rakstzīmju skaits virknē V3: " << s << endl;
    for (i = 0; i < s; i++)
    {
        strncpy(vs,v3+i,1);
        c = atoi(vs);
        sum = sum + c;
    }
    cout << "Ciparu summa virknē v3: : " << sum << endl;
    x = atoi(v3);
    kv = sqrt(x);
    cout << "Skaitlis x: " << x << endl;
    cout << "Kvadratsakne no x: " << kv << endl;
//system("pause");
    return 0;
}