#include <bits/stdc++.h>

using namespace std;
int swaps=0,comp=0;
int partition(int arr[],int s,int e)
{
    int p=arr[e];
    int i=s-1,j=s;
    for (;j<e;j++)
    {
        ++comp;
        if(arr[j]<=p)
        {
            ++swaps;
            int t = arr[++i];
            arr[i] = arr[j];
            arr[j] = t;
        }
    }
    swaps++;
    int t = arr[++i];
    arr[i] = arr[j];
    arr[j] = t;
    return i;
}
void QuickSort(int arr[],int s,int e)
{
    if(s>=e)
        return;
    int p=partition(arr,s,e);
    QuickSort(arr,s,p-1);
    QuickSort(arr,p+1,e);
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
        QuickSort(arr,0,n-1);
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        cout<<"Comparisions :"<<comp<<"\n";
        cout<<"Swaps :"<<swaps<<"\n";
    }
    return 0;
}
