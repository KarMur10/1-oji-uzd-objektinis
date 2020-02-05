#include <iostream>

using namespace std;

int main()
{
    string eilute1, eilute2, eilute3, eilute4, eilute5;
    string vardas;
    cout << "iveskite varda\n";
    cin >> vardas;
    for(int i = 0; i < 13+vardas.length(); i++)
    {
        cout << "*";
        eilute1 += '*';
    }
    cout << endl << "*";
    eilute2 += '*';
    for(int a = 0; a < 11+vardas.length(); a++)
    {
        cout << " ";
        eilute2 += ' ';
    }
    eilute2 += '*';
    cout << "*" << endl << "* Sveikas, " << vardas << " *" << endl << "*";
    eilute3 += "* Sveikas, ";
    eilute3 += vardas;
    eilute3 += " *";
    eilute4 = eilute2;
    eilute5 = eilute1;
    for(int c = 0; c < 11+vardas.length(); c++)
    {
        cout << " ";
    }
    cout << "*" << endl;
    for(int q = 0; q < 13+vardas.length(); q++)
    {
        cout << "*";
    }
    cout << endl << endl;
    cout << eilute1 << endl;
    cout << eilute2 << endl;
    cout << eilute3 << endl;
    cout << eilute4 << endl;
    cout << eilute5 << endl;
    return 0;
}
