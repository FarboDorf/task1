#include <iostream>

using namespace std;

int main()
{
    int num;
    string name, surname;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your surname: ";
    cin >> surname;
    cout << "Enter your number on the list: ";
    cin >> num;
    cout << '\n';

    cout << "Your option by number on the list: " << (num % 3) + 1 << endl;
    cout << "Your option by name: " << (name[0] % 3) + 1 << endl;
    cout << "Your option by surname: " << (surname[0] % 3) + 1 << endl;
    return 0;
}
