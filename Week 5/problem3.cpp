#include <bits/stdc++.h>

using namespace std;

void sol(int arr[],int arr1[],int n,int m)
{
    int i=0,j=0;
    while(i<n&&j<m)
    {
        if(arr[i]==arr1[j])
        {
            cout<<arr[i]<<" ";
            i++;
            j++;
        }
        else if(arr[i]<arr1[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    cout<<"\n";
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
        int m;
        cin>>m;
        int arr1[m];
        for(int i=0;i<m;i++)
        {
            cin>>arr1[i];
        }
        sol(arr,arr1,n,m);
    }
    return 0;
}