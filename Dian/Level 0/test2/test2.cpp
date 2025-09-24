#include <bits/stdc++.h>
using namespace std;
string s1[10000];
string s2[10000];
int main()
{
    freopen("data.txt","r",stdin);
    string temp;
    int cnt = 1;
    while(cin >> temp)
    {
        int pos = temp.find(":",0);
        if( pos != -1)
        {
            for(int i=0;i<pos;i++)
            {
                s1[cnt] += temp[i];
            }
            for(int i=pos+1;i<temp.size();i++)
            {
                s2[cnt] += temp[i];
            }
            cnt++;
        }
    }
    cin.clear();
    freopen("CON","r",stdin);
    freopen("CON","w",stdout);
    string tem;
    while(cin >> tem)
    {
                int p = 0;
                bool book = 0;
                for(int i=1;i<cnt;i++)
                {
                    if(tem == s1[i])
                    {
                        p = i;
                        book = 1;
                        break;
                    }
                }
                if(book == 1)
                {
                    cout << s2[p] << endl;
                }
                else
                {
                    if(tem == "Quit")
                    {
                        return 0;
                    }
                    else
                    {
                        cout << "Error" << endl;
                    }
                }
    }
    return 0;
}
