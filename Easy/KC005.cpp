// KC005.cpp

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
bool sprawdz_imie(string imie)
{
  bool wynik=true;
  if (imie[0]>='A' && imie[0]<='Z')
  {
    for (int i=1; i<imie.size()-1; i++)
    {
      if (!(imie[i]>='a' && imie[i]<='z'))
      {
        wynik=false;
        break;
      }
    }
  }
  else
  {
    wynik=false;
  }
  return wynik;
}
bool sprawdz_nazwisko(string nazwisko)
{
  bool wynik=true;
  if (nazwisko[0]>='A' && nazwisko[0]<='Z')
  {
    for (int i=1; i<nazwisko.size()-1; i++)
    {
      if (!(nazwisko[i]>='a' && nazwisko[i]<='z'))
      {
        wynik=false;
        break;
      }
    }
  }
  else
  {
    wynik=false;
  }
  return wynik;
}

bool sprawdz_date(string data)
{
  bool wynik=true;
  string rok, miesiac, dzien;
  rok=data.substr(0,4);
  miesiac=data.substr(5,2);
  dzien=data.substr(8,2);
  if (!(rok>="1900" && rok<="2000")) wynik=false;
  if (!(miesiac>="01" && miesiac<="12")) wynik=false;
  if (!(dzien>="01" && dzien<="31")) wynik=false;
  return wynik;
}
int main()
{
  string temp;
  string imie, nazwisko, data;
  while (cin>>temp>>imie>>temp>>nazwisko>>temp>>temp>>data)
  {
    if (!sprawdz_imie(imie)) cout<<"0"<<endl;
    else if (!sprawdz_nazwisko(nazwisko)) cout<<"1"<<endl;
    else if (!sprawdz_date(data)) cout<<"2"<<endl;
    else cout<<"3"<<endl;
  }
  return 0;
}
