#include <bits/stdc++.h>

using namespace std;
int arr[101][101];
bool dfs(int s,vector<bool> & vis,vector<bool> &st,int n)
{
    vis[s]=st[s]=1;
    for(int i=1;i<=n;i++)
    {
        if(i!=s&&st[i]==1&&arr[s][i]==1)
        {
            return true;
        }
        if(vis[i]==0&&arr[s][i]==1)
        {
            if(dfs(i,vis,st,n))
                return true;
        }
    }
    st[s]=0;
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
        vector<bool> st(n+1,false);
        vector<bool> vis(n+1,false);
        int f=0;
        for(int i=1;i<=n;i++)
        {
            if(dfs(i,vis,st,n))
            {
                f=1;
                cout<<"Yes there is a cycle\n";
                break;
            }
        }
        if(f==0)
        {
            cout<<"No the is no cycle\n";
        }
    }
    return 0;
}
