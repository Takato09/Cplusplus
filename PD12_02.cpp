//Pāra vai nepāra skaitļa noteikšana
#include <iostream>
using namespace std;
bool is_odd(int number) {
    return number & 1;
}

int main() {
    string answer = "Jā";
    while (answer == "Jā") {
        cout << "Ievadiet skaitli: ";
        int number = 0;
        cin >> number;
        if (is_odd(number))
            cout << "Šis ir nepāra skaitlis.";
        else
            cout << "Šis ir pāra skaitlis.";
        cout << "\nVai atkārtot? (Jā - Nē): ";
        cin >> answer;
    }
    //system("pause");
    return 0;
}