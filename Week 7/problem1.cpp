#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[100][100];
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cin>>arr[i][j];
            }
        }
        vector<bool> vis(n+1,false);
        vector<int> dis(n+1,INT_MAX);
        vector<int> path(n+1,1);
        int s;
        cin>>s;
        path[s]=s;
        dis[s]=0;
        for(int i=1;i<n;i++)
        {
            int min1=INT_MAX,ind=1;
            for(int j=1;j<=n;j++)
            {
                if(min1>dis[j]&&vis[j]==0)
                {
                    min1=dis[j];
                    ind=j;
                }
            }
            vis[ind]=1;
            for(int j=1;j<=n;j++)
            {
                if(vis[j]==0&&arr[s][j]>0&&dis[j]>dis[s]+arr[s][j])
                {
                    dis[j]=dis[s]+arr[s][j];
                    path[j]=s;
                }
            }
            s=ind;
        }
        for(int i=1;i<=n;i++)
        {
            cout<<i-1<<"="<<dis[i]<<"\n";
            cout<<"path<==\n";
            int x=i;
            while(path[x]!=x)
            {
                cout<<x-1<<" ";
                x=path[x];
            }
            cout<<0<<"\n";
        }
    }
    return 0;
}
