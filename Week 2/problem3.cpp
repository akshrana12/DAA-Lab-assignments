#include <bits/stdc++.h>

using namespace std;

int BinarySearch(int arr[], int low, int high, int val)
{
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==val)
        {
            return 1;
        }
        else if(arr[mid]<val)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return 0;
}
void sol(int arr[],int n,int f)
{
    sort(arr,arr+n);
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(i==0||arr[i]!=arr[i-1])
        {
            ans+=BinarySearch(arr,i+1,n-1,arr[i]+f);
        }
    }
    cout<<ans<<"\n";
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
        int f;
        cin>>f;
        sol(arr,n,f);
    }
    return 0;
}