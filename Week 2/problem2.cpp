#include <bits/stdc++.h>

using namespace std;
void sol(int arr[],int n)
{
    vector<int> ans;
    for(int i=n-1;i>=2&&ans.size()==0;i--)
    {
        int s=0,e=i-1;
        while(s<e)
        {
            if(arr[s]+arr[e]==arr[i])
            {
                ans.push_back(s+1);
                ans.push_back(e+1);
                ans.push_back(i+1);
                break;
            }
            else if(arr[s]+arr[e]<arr[i])
            {
                s++;
            }
            else
            {
                e--;
            }
        }
    }
    if(ans.size())
    {
        cout<<"Sequence Found\n";
        for(auto i:ans)
            cout<<i<<" ";
        cout<<"\n";
    }
    else
    {
        cout<<"Sequence Not Found\n";
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
        int arr[n];
        int cmp=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sol(arr,n);
    }
    return 0;
}