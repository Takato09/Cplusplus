//Skolas soli
#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a-a%2)/2 << " " << (b-b%2)/2 << " " << (c-c%2)/2;
    return 0;
}

