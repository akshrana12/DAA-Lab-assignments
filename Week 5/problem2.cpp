#include <bits/stdc++.h>

using namespace std;

void sol(int arr[],int s,int e,int val)
{
    int f=0;
    while(s<=e)
    {
        if(arr[s]+arr[e]==val)
        {
            cout<<arr[s]<<" "<<arr[e]<<"\n";
            s++;
            e--;
            f=1;
        }
        else if(arr[s]+arr[e]<val)
        {
            s++;
        }
        else
        {
            e--;
        }
    }
    if(f==0)
    {
        cout<<"No Such Pair\n";
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
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int val;
        cin>>val;
        sort(arr,arr+n);
        sol(arr,0,n-1,val);
    }
    return 0;
}