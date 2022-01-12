//Divu masīvu izveide izmantojot funkciju

#include <iostream>
using namespace std;

void arrcreate(int arr, int size) {
    for (int i = 0; i < size; i++)
    {
        cout << i << " : ";
    }
}

int main(){
    int m[10], n[15], x, y;
    cout << "Ievadiet divu masīvu izmērus: ";
    cin >> x >> y;
    arrcreate(m[10], x);
    cout << endl;
    arrcreate(n[15], y);
    //system ("pause");
    return 0;
}