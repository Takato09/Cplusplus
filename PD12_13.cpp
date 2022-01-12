//Pīrāgu iegāde
#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    double x;
    cin >> a >> b >> c;
    x = (a+b/100.0)*c;
    cout << (int)x << " " << (x-(int)x)*100;
    return 0;
}