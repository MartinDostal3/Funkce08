// Funkce08.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
#include <cmath>

using namespace std;
bool jePrvocislo(int n, int& nejmensiD, int& nejvetsiD) {

    bool je = true;
    bool nejmensi = false;
    bool nejvetsi = false;

    if (n < 2) {
        je = false;
    }

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            je = false;

        }
    }

    for (int i = 2; i < n && !nejmensi; i++)
    {
        if (n % i == 0)
        {
            nejmensiD = i;
            nejmensi = true;
        }
    }
    for (int i = n - 1; i >= 2 && !nejvetsi; i--)
    {
        if (n % i == 0)
        {
            nejvetsiD = i;
            nejvetsi = true;
        }
    }

    
    return je;
}


int main()
{
    int n{ 0 }, nejmensiD{ 0 }, nejvetsiD{ 0 };

    cout << "Zadej cele cislo n: ";
    cin >> n;
    cout << endl;



    if (jePrvocislo(n, nejmensiD, nejvetsiD))
    {
        cout << "Cislo "<< n << " je prvocislo" << endl;

    }
    else
    {
        cout << "cislo " << n << " neni prvocislo a jeho nejmensi delitel je: " << nejmensiD << " a nejvetsi delitel je: " << nejvetsiD << endl;
    }






}

