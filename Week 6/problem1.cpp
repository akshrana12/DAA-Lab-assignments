#include <bits/stdc++.h>

using namespace std;
int arr[101][101];
bool dfs(int s,int d,vector<bool> & vis,int n)
{
    vis[s]=1;
    if(s==d)
        return true;
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==false&&arr[s][i]==1)
        {
            if(dfs(i,d,vis,n))
                return true;
        }
    }
    return false;
}
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cin>>arr[i][j];
            }
        }
        vector<bool> vis(n,false);
        int s,d;
        cin>>s>>d;
        if(dfs(s,d,vis,n))
        {
            cout<<"Yes there is a path\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
    return 0;
}
