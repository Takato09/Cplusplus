//Nedēļas dienu pārveidošana vārdiskā pierakstā
#include <iostream>

using namespace std;

class Calculator
{
public:
    string Calculate(int x);
};

string Calculator::Calculate(int x) {
    switch (x) {
        case 1:
            return "Tā ir pirmdiena";
        case 2:
            return "Tā ir otrdiena";
        case 3:
            return "Tā ir trešdiena";
        case 4:
            return "Tā ir ceturtdiena";
        case 5:
            return "Tā ir piektdiena";
        case 6:
            return "Tā ir sestdiena";
        case 7:
            return "Tā ir svētdiena";
        default:
            return "Nav tādas dienas!";
    }
}

int main()
{
    int x = 1;
    string result = "";

    cout << "Programma nedēļas dienu pārveidošanai vārdiskā pierakstā" << endl << endl;
    cout << "Lūdzu ievadiet nedēļas dienas kārtas numuru no 1 līdz 7!" << endl;
    Calculator c;
    while (true)
    {
        cin >> x;
        result = c.Calculate(x);
        cout << result << endl;
    }

    return 0;
}
