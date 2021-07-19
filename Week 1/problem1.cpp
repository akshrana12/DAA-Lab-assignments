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
        int flag=0;
        for(int i=0;i<n;i++)
        {
            cmp++;
            if(arr[i]==f)
            {
                flag=1;
                break;
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