#include <bits/stdc++.h>
using namespace std;
bool book;
int tu[7][6][5][5];
string Day[7] = {"Monday","Tuesday","Wednesday","Tursday","Friday","Saturday","Sunday"};
string ren[26] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
struct yonghu
{
    int day;
    int floor;
    int x,y;
};
vector<yonghu> ans[30];
int now;
void login()
{
        cout << "enter your username:" << endl;
        string temp;
        cin >> temp;
        for(int i=0;i<26;i++)
        {
            if(temp == ren[i])
            {
                now= i;
                break;
            }
        }
        cout << "login successfully" << endl;
        book = 1;
        return;
}
void exit()
{
    for(int i=0;i<ans[now].size();i++)
    {
        tu[ans[now][i].day][ans[now][i].floor][ans[now][i].x][ans[now][i].y] = 1;
    }
    now = 0;
    book =0;
}
void reserve()
{
    string tian;
    cin >> tian;
    int tem= 0;
    for(int i=0;i<7;i++)
    {
            if(tian == Day[i])
            {
                tem = i;
                break;
            }
    }
    string temp1,temp2;
    cin >> temp1;
    int cnt = 0;
    cin >> cnt;
    cin >> temp2;
    int x1,y1;
    cin >> x1 >> y1;
    if(tu[tem][cnt][x1][y1] == 0)
    {
        tu[tem][cnt][x1][y1] = 2;
    }
    else
    {
        cout << "The seat has been reserved !" << endl;
    }
    cout << "OK" << endl;
    yonghu tt;
    tt.day = tem;
    tt.floor = cnt;
    tt.x = x1;
    tt.y = y1;
    ans[now].push_back(tt);
    return;
}
void reservation()
{
    for(int i=0;i<ans[now].size();i++)
    {
        cout << Day[ans[now][i].day] << " " << "Floor " << ans[now][i].floor << " " << "Seat " << ans[now][i].x << " " << ans[now][i].y << endl;
     }
     return;
}
void ask(int t)
{
        string temp;
        cin >> temp;
        int cnt = 0;
        cin >> cnt;
        for(int i=1;i<=4;i++)
        {
            for(int j=1;j<=4;j++)
            {
                cout << tu[t][cnt][i][j];
            }
            cout << endl;
        }
        return;
}
void Clear()
{
    memset(tu,0,sizeof(tu));
    memset(ans,0,sizeof(tu));
    return;
}
int main()
{
    while(true)
    {
        string s;
        cin >> s;
        if(s == "Login")
        {
            if(book == 0)
            {
                login();
            }
        }
        else if(s == "Quit")
        {
            return 0;
        }
        else if(s == "Exit")
        {
            exit();
        }
        else if(book == 1 && s == "Reserve")
        {
            reserve();
        }
        else if(book == 1 && s == "Reservation")
        {
            reservation();
        }
        else if(book == 1 && s == "Clear")
        {
            Clear();
        }
        else
        {
            int p = 0;
            int po = 0;
            for(int i=0;i<7;i++)
            {
                    if(s == Day[i])
                    {
                        p =1;
                        po = i;
                        break;
                    }
            }
            if(p == 1)
            {
                ask(po);
            }
            else
            {
                cout << "Error" << endl;
            }
        }
    }
    return 0;
}
