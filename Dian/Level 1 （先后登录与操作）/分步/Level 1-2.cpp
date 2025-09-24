#include <bits/stdc++.h>
using namespace std;
int tu[7][6][5][5];//Ìì£¬Â¥£¬ĞĞ£¬ÁĞ
string Day1[7] = {"Monday","Tuesday","Wednesday","Tursday","Friday","Saturday","Sunday"};
int Day2[7] = {0,1,2,3,4,5,6};
int main()
{
    while(true)
    {
        string s;
        cin >> s;
        if(s == "Reserve")
        {
            string tian;
            cin >> tian;
            int day= 0;
            for(int i=0;i<7;i++)
            {
                if(tian == Day1[i])
                {
                    day = Day2[i];
                    break;
                }
            }
            string temp1,temp2;
            cin >> temp1;
            int cnt = 0;
            cin >> cnt;
            cin >> temp2;
            int x,y;
            cin >> x >> y;
            tu[day][cnt][x][y] = 2;
            cout << "OK" << endl;
        }
        else if(s == "Reservation")
        {
            for(int i=0;i<7;i++)
            {
                for(int j=1;j<=5;j++)
                {
                    for(int t=1;t<=4;t++)
                    {
                        for(int p=1;p<=4;p++)
                        {
                            if(tu[i][j][t][p] == 2)
                            {
                                cout << Day1[i] << " " << "Floor " << j << " " << "Seat " << t << " " << p << endl;
                            }
                        }
                    }
                }
            }
        }
        else
        {
            int day= 0;
            for(int i=0;i<7;i++)
            {
                if(s == Day1[i])
                {
                    day = Day2[i];
                    break;
                }
            }
            string temp;
            cin >> temp;
            int cnt = 0;
            cin >> cnt;
            for(int i=1;i<=4;i++)
            {
                for(int j=1;j<=4;j++)
                {
                   cout << tu[day][cnt][i][j];
                }
                cout << endl;
            }
        }
    }
    return 0;
}
