#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    t=1;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            pq.push(arr[i]);
        }
        int sum=0;
        while(pq.size()>1)
        {
            int t1=pq.top();
            pq.pop();
            int t2=pq.top();
            pq.pop();
            sum+=(t1+t2);
            pq.push(t1+t2);
        }
        cout<<sum<<"\n";
    }
    return 0;
}