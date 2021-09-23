#include <bits/stdc++.h>

using namespace std;
int arr[101][101];
bool dfs(int s,vector<int> & vis,int n,int c)
{
    vis[s]=c;
    int send=2;
    if(c==2)
        send=1;
    for(int i=1;i<=n;i++)
    {
        if(s==i||vis[i]==send)
            continue;
        if(arr[s][i]==1&&vis[i]==c)
        {
            return true;
        }
        else if(arr[s][i]==1)
        {
            if(dfs(i,vis,n,send))
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
        vector<int> vis(n+1,0);
        if(dfs(1,vis,n,1))
        {
            cout<<"Graph is not bipatite\n";
        }
        else
        {
            cout<<"Graph is bipatite\n";
        }
    }
    return 0;
}
