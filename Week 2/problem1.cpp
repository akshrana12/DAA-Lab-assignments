#include <bits/stdc++.h>

using namespace std;

int BinarySearchFirst(int arr[], int low, int high, int val)
{
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]<val)
        {
            low=mid+1;
        }
        else if(arr[mid]>val)
        {
            high=mid-1;
        }
        else
        {
            if(mid==0||arr[mid-1]!=arr[mid])
                return mid;
            else
            {
                high=mid-1;
            }
        }
    }
    return -1;
}
int BinarySearchLast(int arr[], int low, int high, int val)
{
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]<val)
        {
            low=mid+1;
        }
        else if(arr[mid]>val)
        {
            high=mid-1;
        }
        else
        {
            if(mid==high||arr[mid+1]!=arr[mid])
                return mid;
            else
            {
                low=mid+1;
            }
        }
    }
    return -1;
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
        int s=BinarySearchFirst(arr,0,n-1,f);
        int s1=BinarySearchLast(arr,0,n-1,f);
        if(s==-1)
        {
            cout<<"Not Present\n";
        }
        else
        {
            cout<<"Present "<<s1-s+1<<" times\n";
        }
    }
    return 0;
}