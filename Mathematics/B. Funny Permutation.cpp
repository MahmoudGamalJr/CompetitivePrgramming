// Problem Name: B. Funny Permutation
// Problem Link: https://codeforces.com/contest/1741/problem/B
// Language: CPP
// Submission Link: https://codeforces.com/contest/1741/submission/175690703
// User: Mahmoud_Gamal_

#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
        ios_base::sync_with_stdio(0);
        cin.tie(0);


        int T ; cin >> T; // test cases
        while(T--)
        {
            int n ; cin >> n;
            if(n==3)
            {
                cout << "-1\n";
                continue;
            }
            cout << n << " " <<n - 1 <<" ";
            for(int i = 1; i <= n - 2;i++)
            {
                cout << i <<" ";
            }
            cout << '\n';
        }








       return 0;
}
