// Problem Name: B. Even Numbers
// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B
// Language: CPP
// Submission Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/176950278
// User: Mahmoud_Gamal_

#include<bits/stdc++.h>

using namespace std;

int main()
{
        ios_base :: sync_with_stdio(0),
        cin.tie(0);


        int n ; cin >> n;
        if(n<=2)
        {
            return cout << -1, 0;
        }
        for(int i = 2; i <= n; i++)
        {
            if( i%2 == 0 )
            {
                cout << i << '\n';
            }
        }








	 return 0;

}
