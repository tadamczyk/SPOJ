// CHAOS.cpp

#include <iostream>
#include <string>
#include <sstream>
using namespace std;
struct tab
{
  string odp;
  int nr;
};
tab odp[79];
void dane()
{
  odp[0].odp="00:00";  odp[0].nr=0;
  odp[1].odp="00:01";  odp[1].nr=1;
  odp[2].odp="00:02";  odp[2].nr=2;
  odp[3].odp="00:03";  odp[3].nr=3;
  odp[4].odp="00:04";  odp[4].nr=4;
  odp[5].odp="00:05";  odp[5].nr=5;
  odp[6].odp="00:06";  odp[6].nr=6;
  odp[7].odp="00:07";  odp[7].nr=7;
  odp[8].odp="00:08";  odp[8].nr=8;
  odp[9].odp="00:09";  odp[9].nr=9;
  odp[10].odp="00:11"; odp[10].nr=11;
  odp[11].odp="00:22"; odp[11].nr=22;
  odp[12].odp="00:33"; odp[12].nr=33;
  odp[13].odp="00:44"; odp[13].nr=44;
  odp[14].odp="00:55"; odp[14].nr=55;
  odp[15].odp="01:01"; odp[15].nr=101;
  odp[16].odp="01:11"; odp[16].nr=111;
  odp[17].odp="01:21"; odp[17].nr=121;
  odp[18].odp="01:31"; odp[18].nr=131;
  odp[19].odp="01:41"; odp[19].nr=141;
  odp[20].odp="01:51"; odp[20].nr=151;
  odp[21].odp="02:02"; odp[21].nr=202;
  odp[22].odp="02:12"; odp[22].nr=212;
  odp[23].odp="02:22"; odp[23].nr=222;
  odp[24].odp="02:32"; odp[24].nr=232;
  odp[25].odp="02:42"; odp[25].nr=242;
  odp[26].odp="02:52"; odp[26].nr=252;
  odp[27].odp="03:03"; odp[27].nr=303;
  odp[28].odp="03:13"; odp[28].nr=313;
  odp[29].odp="03:23"; odp[29].nr=323;
  odp[30].odp="03:33"; odp[30].nr=333;
  odp[31].odp="03:43"; odp[31].nr=343;
  odp[32].odp="03:53"; odp[32].nr=353;
  odp[33].odp="04:04"; odp[33].nr=404;
  odp[34].odp="04:14"; odp[34].nr=414;
  odp[35].odp="04:24"; odp[35].nr=424;
  odp[36].odp="04:34"; odp[36].nr=434;
  odp[37].odp="04:44"; odp[37].nr=444;
  odp[38].odp="04:54"; odp[38].nr=454;
  odp[39].odp="05:05"; odp[39].nr=505;
  odp[40].odp="05:15"; odp[40].nr=515;
  odp[41].odp="05:25"; odp[41].nr=525;
  odp[42].odp="05:35"; odp[42].nr=535;
  odp[43].odp="05:45"; odp[43].nr=545;
  odp[44].odp="05:55"; odp[44].nr=555;
  odp[45].odp="06:06"; odp[45].nr=606;
  odp[46].odp="06:16"; odp[46].nr=616;
  odp[47].odp="06:26"; odp[47].nr=626;
  odp[48].odp="06:36"; odp[48].nr=636;
  odp[49].odp="06:46"; odp[49].nr=646;
  odp[50].odp="06:56"; odp[50].nr=656;
  odp[51].odp="07:07"; odp[51].nr=707;
  odp[52].odp="07:17"; odp[52].nr=717;
  odp[53].odp="07:27"; odp[53].nr=727;
  odp[54].odp="07:37"; odp[54].nr=737;
  odp[55].odp="07:47"; odp[55].nr=747;
  odp[56].odp="07:57"; odp[56].nr=757;
  odp[57].odp="08:08"; odp[57].nr=808;
  odp[58].odp="08:18"; odp[58].nr=818;
  odp[59].odp="08:28"; odp[59].nr=828;
  odp[60].odp="08:38"; odp[60].nr=838;
  odp[61].odp="08:48"; odp[61].nr=848;
  odp[62].odp="08:58"; odp[62].nr=858;
  odp[63].odp="09:09"; odp[63].nr=909;
  odp[64].odp="09:19"; odp[64].nr=919;
  odp[65].odp="09:29"; odp[65].nr=929;
  odp[66].odp="09:39"; odp[66].nr=939;
  odp[67].odp="09:49"; odp[67].nr=949;
  odp[68].odp="09:59"; odp[68].nr=959;
  odp[69].odp="10:01"; odp[69].nr=1001;
  odp[70].odp="11:11"; odp[70].nr=1111;
  odp[71].odp="12:21"; odp[71].nr=1221;
  odp[72].odp="13:31"; odp[72].nr=1331;
  odp[73].odp="14:41"; odp[73].nr=1441;
  odp[74].odp="15:51"; odp[74].nr=1551;
  odp[75].odp="20:02"; odp[75].nr=2002;
  odp[76].odp="21:12"; odp[76].nr=2112;
  odp[77].odp="22:22"; odp[77].nr=2222;
  odp[78].odp="23:32"; odp[78].nr=2332;
}
string usun(string str)
{
  string str2=str;
  for (int a=0; a<str2.length(); a++)
  {
    if (str2[a]==':') str2.erase(a,1);
  }
  return str2;
}
int str_to_int(string s)
{
  int d;
  istringstream iss(s);
  iss>>d;
  return d;
}
int main()
{
  dane();
  int t;
  string x;
  cin>>t;
  for (int a=0; a<t; a++)
  {
    cin>>x;
    int godz=str_to_int(usun(x));
    bool found=false;
    for (int b=0; b<79; b++)
    {
      if (godz>=odp[b].nr and godz<odp[b+1].nr)
      {
        cout<<odp[b+1].odp<<endl;
        found=true;
        break;
      }
    }
    if (!found) cout<<odp[0].odp<<endl;
  }
  return 0;
}
