#include <iostream>

using namespace std;

int main()
{
    string vardas;
    cout << "iveskite varda\n";
    cin >> vardas;
    for(int i = 0; i < 13+vardas.length(); i++)
    {
        cout << "*";
    }
    cout << endl << "*";
    for(int a = 0; a < 11+vardas.length(); a++)
    {
        cout << " ";
    }
    cout << "*" << endl << "* Sveikas, " << vardas << " *" << endl << "*";
    for(int c = 0; c < 11+vardas.length(); c++)
    {
        cout << " ";
    }
    cout << "*" << endl;
    for(int q = 0; q < 13+vardas.length(); q++)
    {
        cout << "*";
    }
    cout << endl;
    return 0;
}
