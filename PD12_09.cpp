//Vesela negatīva skaitļa desmitu skaits
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a;
    cin >> a;
    cout << abs(a/10%10);
    return 0;
}