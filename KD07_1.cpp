//Kvadrāta vai saknes aprēķināšana
#include <iostream>
#include <cmath>
class Calculator
{
public:
    double Calculate(double x);
};

double Calculator::Calculate(double x)
{
    if (x < 0) return x*x;
    else if (x > 0) return sqrt(x);
    else return 0;
}

using namespace std;

int main()
{
    double x = 0;
    double result = 0;

    cout << "Kvadrāta vai saknes aprēķināšanas programma" << endl << endl;
    cout << "Lūdzu ievadiet skaitli. Formāts:\n-a lai atrastu šī skaitļa kvadrātu\na lai atrastu šī skaitļa kvadrātsakni" << endl;
    Calculator c;
    while (true)
    {
        cin >> x;
        result = c.Calculate(x);
        cout << "Rezultāts ir: " << result << endl;
    }

    return 0;
}
