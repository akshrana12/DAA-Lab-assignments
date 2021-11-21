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
        vector<vector<int>> ans(n+1,vector<int>(n+1,INT_MAX));
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                for(int k=1;k<=n;k++)
                {
                    if(arr[j][i]!=1000&&arr[i][k]!=1000&&ans[j][k]>arr[j][i]+arr[i][k])
                    {
                        ans[j][k]=arr[j][i]+arr[i][k];
                    }
                }
            }
        }
        for(int j=1;j<=n;j++)
        {
            for(int k=1;k<=n;k++)
            {
                cout<<ans[j][k]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}