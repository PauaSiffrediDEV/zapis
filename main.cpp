#include <iostream>
#include <fstream>


using namespace std;

string imie, nazwisko;
int nr_tel;

int main()
{
    cout << "Podaj imie: " << endl;
    cin>>imie;

     cout << "Podaj nazwisko: " << endl;
    cin>>nazwisko;

     cout << "Podaj nr telefonu: " << endl;
    cin>>nr_tel;

    fstream plik;
    plik.open("wizytowka.txt",ios::out | ios::app);


    plik<<imie<<endl;
    plik<<nazwisko<<endl;
    plik<<nr_tel<<endl;

    plik.close();


    return 0;
}
