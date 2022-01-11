//c stila virknes
#include <iostream>
#include <string>

using namespace std;
int main()
{
    string input, sign, strx, stry;
    int x,y,result;
    cout << "Ievadiet virkni xx+yy: ";
    cin >> input;
    cout << "Ievadītā virkne: " << input;
    sign = input[2];
    strx.assign(input,0,2);
    stry.assign(input,3,2);
    x = stoi(strx);
    y = stoi(stry);
    if (sign == "+") result = x + y;
    else if (sign == "-") result = x - y;
    cout << "\nRezultāts: " << result;
    //system("pause");
    return 0;
}