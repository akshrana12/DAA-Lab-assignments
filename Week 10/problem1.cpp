#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,pair<int,int>> a,pair<int,pair<int,int>> b)
{
    return a.second.first<b.second.first;
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
        int tot=1,end=arr[0].second.first;
        vector<int> task;
        task.push_back(arr[0].second.second);
        for(int i=1;i<n;i++)
        {
            if(end<=arr[i].first)
            {
                task.push_back(arr[i].second.second);
                end=arr[i].second.first;
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