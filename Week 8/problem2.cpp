#include <bits/stdc++.h>

using namespace std;
int parent[100],rank1[100];
int find1(int a)
{
    if(parent[a]==a)
    {
        return a;
    }
    return parent[a]=find1(parent[a]);
}
void union1(int a,int b)
{
    int x=find1(a);
    int y=find1(b);
    if(x!=y)
    {
        if(rank1[x]<rank1[y])
            swap(x,y);
        parent[x]=y;
        rank1[x]+=rank1[y];
    }
}
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
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            parent[i]=i;
            rank1[i]=1;
        }
        for(int k=0;k<n-1;k++)
        {
            int min=INT_MAX,x=0,y=0;
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    if(i!=j&&(find1(i)!=find1(j))&&arr[i][j]>0&&min>arr[i][j])
                    {
                        min=arr[i][j];
                        x=i;
                        y=j;
                    }
                }
            }
            union1(x,y);
            sum+=min;
        }
        cout<<sum<<"\n";
    }
    return 0;
}

// 7
// 0 0 7 5 0 0 0
// 0 0 8 5 0 0 0
// 7 8 0 9 7 0 0
// 5 0 9 0 15 6 0
// 0 5 7 15 0 8 9
// 0 0 0 6 8 0 11
// 0 0 0 0 9 11 0