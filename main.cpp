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

    cout << "Your variant generated by your number on the list: " << (num % 3) + 1 << endl;
    cout << "Your variant generated by your name: " << (name[0] % 3) + 1 << endl;
    cout << "Your variant generated by your surname: " << (surname[0] % 3) + 1 << endl;
    return 0;
}
