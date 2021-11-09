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
            for(int j=1;j<=n;j++)
            {
                for(int k=1;k<=n;k++)
                {
                    if(arr[j][k]!=0&&dis[j]!=INT_MAX&&dis[k]>dis[j]+arr[j][k])
                    {
                        dis[k]=dis[j]+arr[j][k];
                        path[k]=j;
                    }
                }
            }
        }
        for(int i=1;i<=n;i++)
        {
            int x=i;
            while(path[x]!=x)
            {
                cout<<x<<" ";
                x=path[x];
            }
            cout<<1<<":"<<dis[i]<<"\n";
        }
    }
    return 0;
}