#include <bits/stdc++.h>

using namespace std;
int inversion=0,comp=0;
void Merge(int arr[],int s,int mid,int e)
{
    int n=mid-s+1;
    int m=e-mid;
    int a[n],b[m];
    for(int i=0;i<n;i++)
    {
        a[i]=arr[s+i];
    }
    for(int i=0;i<m;i++)
    {
        b[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=s;
    while(i<n&&j<m)
    {
        comp++;
        if(a[i]<=b[j])
        {
            arr[k]=a[i];
            k++;
            i++;
        }
        else
        {
            inversion+=(n-i);
            arr[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<n)
    {
        arr[k++]=a[i++];
    }
    while(j<m)
    {
        arr[k++]=b[j++];
    }
}
void MergeSort(int arr[],int s,int e)
{
    if(s+1<=e)
    {
        int mid=(s+e)/2;
        MergeSort(arr,s,mid);
        MergeSort(arr,mid+1,e);
        Merge(arr,s,mid,e);
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
        MergeSort(arr,0,n-1);
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        cout<<"Comparisions :"<<comp<<"\n";
        cout<<"Inversion :"<<inversion<<"\n";
    }
    return 0;
}
