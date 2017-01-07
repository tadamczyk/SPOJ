// BFN1.cpp

#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

bool czyPalindrom(string zm){
  for (int i=0; (unsigned)i<=zm.length(); i++) {
    if (zm[i]!=zm[zm.length()-1-i])
      return false;
    return true;
  }
}

int main(){
  int t, a, b, licznik = 0;
  cin >> t;
  string tekst, pom = "", pom2 = "";
  while (t--) {
    cin >> tekst;
    while (!czyPalindrom(tekst)) {
      for (int i = tekst.length()-1; i >=0; i--)
        pom += tekst[i];
      sscanf(tekst.c_str(), "%d", &a);
      sscanf(pom.c_str(), "%d", &b);
      sprintf((char*)pom2.c_str(), "%d", (a+b));
      tekst = pom2.c_str();
      pom = "";
      pom2 = "";
      licznik++;
    }
    cout << tekst << " " << licznik << endl;
    licznik = 0;
  }
  return 0;
}
