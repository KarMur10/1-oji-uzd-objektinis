#include <iostream>
#include <string>

using namespace std;

int main()
{
    bool lytis;
    int t;
    string eilute1, eilute2, eilute3, eilute4, eilute5;
    string vardas;
    cout << "iveskite varda\n";
    cin >> vardas;
    if (vardas[vardas.length() - 1] == 's')
    {
        lytis = 1;
        t = 11;
    }
    else
    {
        lytis = 0;
        t = 10;
    }
    cout << lytis << endl;
    for(int i = 0; i < t+2+vardas.length(); i++)
    {
        cout << "*";
        eilute1 += '*';
    }
    cout << endl << "*";
    eilute2 += '*';
    for(int a = 0; a < t+vardas.length(); a++)
    {
        cout << " ";
        eilute2 += ' ';
    }
    eilute2 += '*';
    cout << "*" << endl;
    if (lytis == 1) cout << "* Sveikas, ";
    else cout << "* Sveika, ";
    cout << vardas << " *" << endl;
    cout << "*";
    eilute3 += "* Sveikas, ";
    eilute3 += vardas;
    eilute3 += " *";
    eilute4 = eilute2;
    eilute5 = eilute1;
    for(int c = 0; c < t+vardas.length(); c++)
    {
        cout << " ";
    }
    cout << "*" << endl;
    for(int q = 0; q < t+2+vardas.length(); q++)
    {
        cout << "*";
    }
    return 0;
}
