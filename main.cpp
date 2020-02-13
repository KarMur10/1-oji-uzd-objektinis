#include <iostream>
#include <string>

using namespace std;

int main()
{
    bool lytis;
    int t, r, h;
    string vardas;
    cout << "iveskite varda\n";
    cin >> vardas;
    cout << "irasykite eiluciu skaiciu (minimum 3)\n";
    cin >> r;
    r = r - 3;
    h = r;
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
    for(int i = 0; i < t+2+vardas.length(); i++)
    {
        cout << "*";
    }
    cout << endl;
    r = r/2;
    for (r; r > 0; r--)
    {
        cout << "*";
        for(int a = 0; a < t+vardas.length(); a++)
        {
            cout << " ";
        }
            cout << "*" << endl;
    }


    if (lytis == 1) cout << "* Sveikas, ";
    else cout << "* Sveika, ";
    cout << vardas << " *" << endl;
    if(h % 2 != 0) h++;
    h = h/2;
    for(h; h > 0; h--)
    {
        cout << "*";
        for(int c = 0; c < t+vardas.length(); c++)
        {
        cout << " ";
        }
        cout << "*" << endl;
    }
    for(int q = 0; q < t+2+vardas.length(); q++)
    {
        cout << "*";
    }
    return 0;
}
