#include <bits/stdc++.h>

using namespace std;
int swaps=0,comp=0;
int partition(int arr[],int s,int e)
{
    int p=arr[e];
    int i=s-1,j=s;
    for (;j<e;j++)
    {
        comp++;
        if(arr[j]<=p)
        {
            swaps++;
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swaps++;
    i++;
    swap(arr[i],arr[j]);
    return i;
}
int kthsmallest(int arr[],int s,int e,int k)
{
    int p=partition(arr,s,e);
    if(p==k-1)
        return arr[p];
    else if(p<k-1)
        return kthsmallest(arr,p+1,e,k);
    else
        return kthsmallest(arr,s,p-1,k);
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
        int k;
        cin>>k;
        cout<<kthsmallest(arr,0,n-1,k);
    }
    return 0;
}