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
        dis[1]=0;
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
                if(vis[j]==0&&arr[ind][j]>0&&dis[j]>arr[ind][j])
                {
                    dis[j]=arr[ind][j];
                }
            }
        }
        int sum=0;
        for(int i=1;i<=n;i++)
        {
           sum+=dis[i];
        }
        cout<<sum<<"\n";
    }
    return 0;
}