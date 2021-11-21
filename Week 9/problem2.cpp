#include <bits/stdc++.h>

using namespace std;
bool cmp(pair<float,pair<float,int>> a,pair<float,pair<float,int>> b)
{
    float x=a.second.first/a.first;
    float y=b.second.first/b.first;
    return x>y;
}
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>>n;
        pair<float,pair<float,int>> arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i].first;
        }
        for(int i=0;i<n;i++)
        {
            cin>>arr[i].second.first;
            arr[i].second.second=i;
        }
        float w;
        cin>>w;
        sort(arr,arr+n,cmp);
        float ans=0.0f;
        vector<pair<int,int>> ans1;
        for(int i=0;i<n;i++)
        {
            if(w>=arr[i].first)
            {
                w-=arr[i].first;
                ans+=arr[i].second.first;
                ans1.push_back({arr[i].second.second+1,arr[i].first});
            }
            else
            {
                float x1=arr[i].second.first/arr[i].first;
                ans+=(x1*w);
                ans1.push_back({arr[i].second.second+1,w});
                break;
            }
        }
        cout<<fixed<<setprecision(5)<<ans<<"\n";
        for(auto i:ans1)
        {
            cout<<i.first<<" "<<i.second<<"\n";
        }
    }
    return 0;
}