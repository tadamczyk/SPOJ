// JLITOSL.cpp

#include <iostream>
#include <string>
using namespace std;
string jednosci(char c)
{
  switch (c)
  {
  case '0': return "";
    break;
  case '1': return "jeden";
    break;
  case '2': return "dwa";
    break;
  case '3': return "trzy";
    break;
  case '4': return "cztery";
    break;
  case '5': return "piec";
    break;
  case '6': return "szesc";
    break;
  case '7': return "siedem";
    break;
  case '8': return "osiem";
    break;
  case '9': return "dziewiec";
    break;
  default: return "";
    break;
  }
}
string dziesiatki(char c)
{
  switch (c)
  {
  case '0': return "";
    break;
  case '1': return "dziesiec";
    break;
  case '2': return "dwadziescia";
    break;
  case '3': return "trzydziesci";
    break;
  case '4': return "czterdziesci";
    break;
  case '5': return "piecdziesiat";
    break;
  case '6': return "szescdziesiat";
    break;
  case '7': return "siedemdziesiat";
    break;
  case '8': return "osiemdziesiat";
    break;
  case '9': return "dziewiecdziesiat";
    break;
  default: return "";
    break;
  }
}
string setki(char c)
{
  switch (c)
  {
  case '0': return "";
    break;
  case '1': return "sto";
    break;
  case '2': return "dwiescie";
    break;
  case '3': return "trzysta";
    break;
  case '4': return "czterysta";
    break;
  case '5': return "piecset";
    break;
  case '6': return "szescset";
    break;
  case '7': return "siedemset";
    break;
  case '8': return "osiemset";
    break;
  case '9': return "dziewiecset";
    break;
  default: return "";
    break;
  }
}
string convertThreeDigit(string s)
{
  string tmp;
  if (s.length() == 0) {
    return "";
  }else if(s.length() == 1) {
    tmp = jednosci(s[0]);
    return tmp;
  }else if(s.length() == 2) {
    if (s[0] == '1') {
      switch (s[1]) {
      case '0':
        return "dziesiec";
        break;
      case '1':
        return "jedenascie";
        break;
      case '2':
        return "dwanascie";
        break;
      case '3':
        return "trzynascie";
        break;
      case '4':
        return "czternascie";
        break;
      case '5':
        return "pietnascie";
        break;
      case '6':
        return "szesnascie";
        break;
      case '7':
        return "siedemnascie";
        break;
      case '8':
        return "osiemnascie";
        break;
      case '9':
        return "dziewietnascie";
        break;
      default:
        return "";
        break;
      }
    }else {
      tmp = dziesiatki(s[0]);
      if (s[1] != '0') {
        tmp += " ";
      }

      tmp += jednosci(s[1]);
      return tmp;
    }
  }else {
    if (s[0] == '0' && s[1] == '1') {
      switch (s[2]) {
      case '0':
        return "dziesiec";
        break;
      case '1':
        return "jedenascie";
        break;
      case '2':
        return "dwanascie";
        break;
      case '3':
        return "trzynascie";
        break;
      case '4':
        return "czternascie";
        break;
      case '5':
        return "pietnascie";
        break;
      case '6':
        return "szesnascie";
        break;
      case '7':
        return "siedemnascie";
        break;
      case '8':
        return "osiemnascie";
        break;
      case '9':
        return "dziewietnascie";
        break;
      default:
        return "";
        break;
      }
    } else {
      tmp = setki(s[0]);
      if (s[1] != '0') {
        tmp += " ";
      }
      tmp += dziesiatki(s[1]);
      if (s[2] != '0') {
        tmp += " ";
      }
      tmp += jednosci(s[2]);
      return tmp;
    }
  }
}
string convert(string s)
{
  string k = "";
  string tmp = "";
  if (s.length() <= 3) {
    return convertThreeDigit(s);
  } else if(s.length() >= 4 && s.length() <= 6) {
    unsigned long h = s.length() % 3;
    if (h == 0) {
      h = 3;
    }
    tmp = s.substr(0, h);

    k = convertThreeDigit(tmp);
    if (!k.empty()) {
      k += " tys. ";
    }
    s.erase(0, h);
    k += convert(s);
    return k;
  } else if(s.length() >= 10 && s.length() <= 12) {
    unsigned long h = s.length() % 3;
    if (h == 0) {
      h = 3;
    }
    tmp = s.substr(0, h);

    k = convertThreeDigit(tmp);
    if (!k.empty()) {
      k += " mld. ";
    }
    s.erase(0, h);
    k += convert(s);
    return k;
  } else if(s.length() >= 7 && s.length() <= 9) {
    unsigned long h = s.length() % 3;
    if (h == 0) {
      h = 3;
    }
    tmp = s.substr(0, h);

    k = convertThreeDigit(tmp);
    if (!k.empty()) {
      k += " mln. ";
    }

    s.erase(0, h);
    k += convert(s);
    return k;
  }else if(s.length() >= 13 && s.length() <= 15) {
    unsigned long h = s.length() % 3;
    if (h == 0) {
      h = 3;
    }
    tmp = s.substr(0, h);

    k = convertThreeDigit(tmp);
    if (!k.empty()) {
      k += " bln. ";
    }
    s.erase(0, h);
    k += convert(s);
    return k;
  }
}
int main()
{
  int t;
  cin>>t;
  while (t)
  {
    string s;
    cin>>s;
    if (s=="0")
    {cout<<"zero"<<endl; continue; }
    while (s.length()>=1 and s[0]=='0')
      s.erase(0,1);
    cout<<convert(s)<<endl;
    t--;
  }
  return 0;
}
