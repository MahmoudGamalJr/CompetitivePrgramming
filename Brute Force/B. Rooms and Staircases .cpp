
// Problem Name: B. Rooms and Staircases
// Problem Link: https://codeforces.com/contest/1244/problem/B
// Language: CPP
// Submission Link: https://codeforces.com/contest/1244/submission/175237371
// User: Mahmoud_Gamal_

#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{

        int Test ; cin >> Test;

        while(Test--)
        {

            int roomSize;
            string room;
            cin >> roomSize >> room;
            bool is_one_founded = false, first = true, last = true;
            int firstOne = 0, lastOne = 0, decreising = roomSize - 1;
            if(room[0]=='1' || room[roomSize-1] == '1')
            {
                cout << roomSize * 2 << '\n';
                continue;
            }
            for(int i = 0; i < roomSize;i++)
            {
                is_one_founded |=(room[i]=='1');

                if(room[i]=='1' && first)
                {
                    firstOne = i;
                    first = false;
                }

                if(room[decreising--] == '1' && last)
                {
                     lastOne = i;
                     last = false;
                }
            }

            firstOne = roomSize - firstOne;
            lastOne = roomSize - lastOne;
            firstOne*=2, lastOne*=2;
            cout << ( is_one_founded ? max(firstOne, lastOne) : roomSize) << '\n';

        }










       return 0;
}
