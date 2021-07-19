#include<bits/stdc++.h>
using namespace std;
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
        int low=0,high=n-1,flag=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid]==f)
            {
                cmp+=1;
                flag=1;
                break;
            }
            else if(arr[mid]<f)
            {
                cmp+=2;
                low=mid+1;
            }
            else
            {
                cmp+=3;
                high=mid-1;
            }
        }
        if(flag==1)
        {
            cout<<"Present "<<cmp<<"\n";
        }
        else
        {
            cout<<"Not Present"<<" "<<cmp<<"\n";
        }
    }
}