#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool book = 0;
    while(true)
    {
        string s;
        cin >> s;
        if(s == "Login" && book == 0)
        {
            cout << "Please enter your username" << endl;
            string temp;
            cin >> temp;
            cout << "login successfully" << endl;
            book = 1;
        }
        else if(s == "Exit")
        {
            book = 0;
        }
        else if(s == "Quit")
        {
            return 0;
        }
        else
        {
            cout << "Error" << endl;
        }
    }
    return 0;
}
