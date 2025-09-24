#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Please input:";
    string s;
    while(cin >> s)
    {
        if(s =="Dian")
        {
            cout << "2002" << endl;
        }
        else if(s == "Quit")
        {
            return 0;
        }
        else
        {
            cout << "Error" << endl;
        }
        cout << "Please input:";
    }
    return 0;
}
