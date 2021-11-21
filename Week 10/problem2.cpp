#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,pair<int,int>> a,pair<int,pair<int,int>> b)
{
    if(a.second.first!=b.second.first)
        return a.second.first<b.second.first;
    return a.first<b.first;
}
int main(){
    int t;
    t=1;
    while(t--)
    {
        int n;
        cin>>n;
        pair<int,pair<int,int>> arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i].first;
        }
        for(int i=0;i<n;i++)
        {
            cin>>arr[i].second.first;
            arr[i].second.second=i+1;
        }
        sort(arr,arr+n,cmp);
        vector<int> task;
        int cur_time=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i].second.first-cur_time>=arr[i].first)
            {
                cur_time+=arr[i].first;
                task.push_back(arr[i].second.second);
            }
        }
        cout<<"NO OF NON CONFLICTING ACTIVITIES: "<<task.size()<<"\n";
        cout<<"Tasks are : ";
        for(auto i:task)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}