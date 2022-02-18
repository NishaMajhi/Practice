// find the element that is present in all the rows of matrix
#include <bits/stdc++.h>
using namespace std;
int find(vector<vector<int>> v, int n, int m)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < m; i++)
        mp[v[0][i]] = 1;

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mp[v[i][j]] == i)
            {
                mp[v[i][j]] = i + 1;
                if (i == n - 1 && mp[v[i][j]] == n)
                    return v[i][j];
            }
        }
    }
    return -1;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        vector<int> t;
        for (int j = 0; j < m; j++)
        {
            int a;
            cin>>a;
            t.push_back(a);
        }
        v.push_back(t);
    }

    cout << "repeated element in all rows is : " << find(v, n, m);
}

/*
input:----
4 4
1 2 3 4
2 0 8 6
1 2 0 8
2 0 6 0

output:-------
repeated element in all rows is : 2
